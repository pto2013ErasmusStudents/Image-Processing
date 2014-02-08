#include "morphological_operator.h"

MorphologicalOperator::MorphologicalOperator(PNM* img) :
    Transformation(img)
{
}

MorphologicalOperator::MorphologicalOperator(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

// abstract
const int MorphologicalOperator::morph(math::matrix<double>, math::matrix<bool>)
{
    return 0;
}

math::matrix<bool> MorphologicalOperator::getSE(int size, SE shape)
{
    switch (shape)
    {
    case Square:    return seSquare(size);
    case Cross:     return seCross(size);
    case XCross:    return seXCross(size);
    case VLine:     return seVLine(size);
    case HLine:     return seHLine(size);
    default:        return seSquare(size);
    }
}


math::matrix<bool> MorphologicalOperator::seSquare(int size)
{
    math::matrix<bool> ret(size, size);

	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++) {
			if (i!=0 || i!=size-1 || j!=0 || j!=size-1) {
				ret(i,j)=true;
			}
		}
	}

    return ret;
}

math::matrix<bool> MorphologicalOperator::seCross(int size)
{
    math::matrix<bool> ret(size, size);
	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++) {
			if (i==j) {
				ret(i,j)=true;
			}
			else {
				ret(i,j)=false;
			}
		}
	}

    return ret;
}

math::matrix<bool> MorphologicalOperator::seXCross(int size)
{
    math::matrix<bool> ret(size, size);

	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++) {
			if (i==j || j==size-i-1) {
				ret(i,j)=true;
			}
			else {
				ret(i,j)=false;
			}
		}
	}

    return ret;
}

math::matrix<bool> MorphologicalOperator::seVLine(int size)
{
    math::matrix<bool> ret(size, size);

	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++) {
			if (i=0) {
				ret(i,j)=true;
			}
			else {
				ret(i,j)=false;
			}
		}
	}

    return ret;
}

math::matrix<bool> MorphologicalOperator::seHLine(int size)
{
    math::matrix<bool> ret(size, size);

	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++) {
			if (j=0) {
				ret(i,j)=true;
			}
			else {
				ret(i,j)=false;
			}
		}
	}

    return ret;
}

PNM* MorphologicalOperator::transform()
{  
	int size  = getParameter("size").toInt();
	SE  shape = (MorphologicalOperator::SE) getParameter("shape").toInt();

	PNM* newImage = new PNM(image->width(), image->height(), QImage::Format_RGB32);
	
	math::matrix<bool> se(size,size);
	
	se = getSE(size,shape);
	
	int radius = size/2;

	if (image->format() == QImage::Format_Mono) {
	}
	else if (image->format() == QImage::Format_Indexed8) {
		// Iterate over image space
		for (int x=0; x<image->width(); x++) {
			for (int y=0; y<image->height(); y++) {
				math::matrix<double> window(size,size);
				int a=0;
				for (int i=(x-radius);i<(x+radius+1);i++) {
					int b=0;
					for (int j=(y-radius);j<(y+radius+1);j++) {
						QRgb pixel = getPixel (i,j, RepeatEdge);
						window(a,b) = qGray(pixel);
						b++;
					}
					a++;
				}
				int v = morph(window, se);
				
				newImage->setPixel(x,y, v);
			}
		}
	}
	else { //if (image->format() == QImage::Format_RGB32)
		// Iterate over image space
		for (int x=0; x<image->width(); x++) {
			for (int y=0; y<image->height(); y++){
				math::matrix<double> windowR(size,size);
				math::matrix<double> windowG(size,size);
				math::matrix<double> windowB(size,size);
				int a=0;
				for (int i=(x-radius);i<(x+radius+1);i++) {
					int b=0;
					for (int j=(y-radius);j<(y+radius+1);j++) {
						QRgb pixel = getPixel (i,j, RepeatEdge);
						windowR(a,b) = qRed(pixel);
						windowG(a,b) = qGreen(pixel);
						windowB(a,b) = qBlue(pixel);
						b++;
					}
					a++;
				}
				int r = morph(windowR, se);
				int g = morph(windowG, se);
				int b = morph(windowB, se);
				
				QColor newPixel = QColor(r,g,b);
				newImage->setPixel(x,y, newPixel.rgb());
			}
		}
	}

    return newImage;
}