#include "transformation.h"

Transformation::Transformation(PNM* image) :
    QThread(0)
{
    parameters = new QHash<QString, QVariant>;
    this->image = image;
    this->supervisor = 0;
}

Transformation::Transformation(PNM* image, ImageViewer* iv) :
    QThread(0)
{
    parameters = new QHash<QString, QVariant>;
    this->image = image;
    this->supervisor = iv;

    if (iv)
    {
        connect(this, SIGNAL(started()), iv, SLOT(transformationStarted()));
        connect(this, SIGNAL(finished()), iv, SLOT(transformationFinished()));
        connect(this, SIGNAL(message(QString)), iv, SLOT(toolMessage(QString)));
        connect(this, SIGNAL(progress(int)), iv, SLOT(toolProgress(int)));
        connect(this, SIGNAL(resultReady(PNM*)), iv, SLOT(updateImage(PNM*)));
        connect(this, SIGNAL(finished()), iv, SLOT(toolFinished()));
    }
}

Transformation::~Transformation()
{
    delete parameters;
    if (supervisor)
    {
        disconnect(this, SIGNAL(started()));
        disconnect(this, SIGNAL(message(QString)));
        disconnect(this, SIGNAL(progress(int)));
        disconnect(this, SIGNAL(resultReady(PNM*)));
        disconnect(this, SIGNAL(finished()));
    }
}

/** Sets a parameter param of the transformation
* with the value.
* If the parameter was already set it is overridden
* Returns the pointer to the Transformation object so it can be used as a factory.
*/
Transformation* Transformation::setParameter(QString param, QVariant value)
{
    parameters->insert(param, value);
    return this;
}

/** Returns the value of the given param.
* If the param isn't set returns a default QVariant()
* which is an invalid variant
* @see QVariant::QVariant()
*/
QVariant Transformation::getParameter(QString param)
{
    return parameters->value(param, QVariant());
}

void Transformation::run()
{
    PNM* image = this->transform();
    emit resultReady(image);
}

/**
* /virtual, abstract!/
* Virtual method that do some transformations (based on parameter Hash)
* in the Transformation class it returns a pointer to
* the loaded image or a new null PNM image
*/
PNM* Transformation::transform()
{
    if (image)
        return image;
    else
        return new PNM();
}

/** Returns a pointer to the image stored in the class */
PNM* Transformation::getImage()
{
    return image;
}

/** Returns a pixel value at given coordinates using different modes */
QRgb Transformation::getPixel(int x, int y, Mode mode)
{
    switch (mode) {
    case CyclicEdge:    return getPixelCyclic(x,y);
    case NullEdge:      return getPixelNull(x,y);
    case RepeatEdge:    return getPixelRepeat(x,y);
    default:            return image->pixel(x,y);
    }

}

/** Returns a pixel using the Cyclic mode:
 *  pixel(x,y) = pixel(x%width, y%width);
 */
QRgb Transformation::getPixelCyclic(int x, int y) {

	if (x<0) {
		x += image->width();
	}
	else {
		x = x%image->width();
	}
	if (y<0) {
		y += image->height();
	}
	else {
		y = y%image->height();
	}

    return image->pixel(x,y);
}

/**
  * Returns a given pixel
  * If the pixel is out of image boundaries Black is returned;
  */
QRgb Transformation::getPixelNull(int x, int y) {

	if (x<0 || y<0 || x>=image->width() || y>=image->height()) {
		QColor newPixel = QColor(0,0,0);
		return newPixel.rgb();
	}
	else {
		return image->pixel(x,y);
	}

}

/**
  * Returns given pixel.
  * If the pixel is out of image boundaries
  * the nearest edge pixel is given
  */
QRgb Transformation::getPixelRepeat(int x, int y) {

	if (x<0 || y<0 || x>=image->width() || y>=image->height()) {
		int newX=x;
		int newY=y;
		if (x<0) {
			newX=0;
		}
		if (y<0) {
			newY=0;
		}
		if (x>=image->width()) {
			newX=image->width()-1;
		}
		if (y>=image->height()) {
			newY=image->height()-1;
		}
		return image->pixel(newX,newY);
	}
	else {
		return image->pixel(x,y);
	}
}

/** Returns a size x size part of the image centered around (x,y) */
math::matrix<double> Transformation::getWindow(int x, int y, int size,
                                               Channel channel,
                                               Mode mode)
{
    math::matrix<double> window(size,size);

	int a=0, b=0;
	for (int i=x-size/2; i<=x+size/2; i++) {
		b=0;
		for (int j=y-size/2; j<=y+size/2; j++) {
			QRgb pixel;
			if (i<0 || i>=image->width() || j<0 || j>=image->height()) {
				pixel = getPixel(i, j, mode);
			}
			else {
				pixel = image->pixel(i,j); // Getting the pixel(i,j) value
			}
			int v=0;
			if (channel==RChannel) {
				v=qRed(pixel);
			}
			if (channel==GChannel) {
				v=qGreen(pixel);
			}
			if (channel==BChannel) {
				v=qBlue(pixel);
			}
			if (channel==LChannel) {
				v=qGray(pixel);
			}
			window(a,b)=v;
			b++;
		}
		a++;
	}

    return window;
}

ImageViewer* Transformation::getSupervisor()
{
    return supervisor;
}

#ifdef _MSC_VER
double round(double d)
{
  return floor(d + 0.5);
}
#endif
