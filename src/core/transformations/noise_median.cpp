#include "noise_median.h"

NoiseMedian::NoiseMedian(PNM* img) :
    Convolution(img)
{
}

NoiseMedian::NoiseMedian(PNM* img, ImageViewer* iv) :
    Convolution(img, iv)
{
}

PNM* NoiseMedian::transform()
{
    int width  = image->width();
    int height = image->height();

    PNM* newImage = new PNM(width, height, image->format());

	if (image->format() == QImage::Format_Mono) {
	}
	else if (image->format() == QImage::Format_Indexed8) {
		// Iterate over image space
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {
				int v = getMedian(x, y, LChannel);    // Get the 0-255 value of the L channel
				
				newImage->setPixel(x,y, v);
            }
		}
    }
	else { //if (image->format() == QImage::Format_RGB32)
		// Iterate over image space
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++){

				int r = getMedian(x, y, RChannel);
				int g = getMedian(x, y, GChannel);
				int b = getMedian(x, y, BChannel);

                QColor newPixel = QColor(r,g,b);
                newImage->setPixel(x,y, newPixel.rgb());
            }
		}
    }

    return newImage;
}

int NoiseMedian::compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int NoiseMedian::getMedian(int x, int y, Channel channel)
{
    int radius = getParameter("radius").toInt();
	int size = radius*2+1;

    math::matrix<double> window(size,size);
	QVector<int> intVector;
	int a=0, b=0;

	for (int i=x-size/2; i<=x+size/2; i++) {
		b=0;
		for (int j=y-size/2; j<=y+size/2; j++) {
			QRgb pixel= getPixel(i, j, RepeatEdge);
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
			intVector.append(v);
			window(a,b)=v;
			b++;
		}
		a++;
	}

	qSort(intVector);

	int tam = intVector.size();

    return intVector.at(tam/2-1);
}
