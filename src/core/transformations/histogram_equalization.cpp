#include "histogram_equalization.h"
#include <numeric>

#include "../histogram.h"

HistogramEqualization::HistogramEqualization(PNM* img) :
    Transformation(img)
{
}

HistogramEqualization::HistogramEqualization(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

PNM* HistogramEqualization::transform()
{
    int width = image->width();
    int height = image->height();

	int totalPixels = width*height;

    PNM* newImage = new PNM(width, height, image->format());

	QHash<int, int>::const_iterator i;
	int j;
	double probR[256];
	for (j=0;j<255;++j) {
		probR[j]=0;
	}
	for (i=image->getHistogram()->get(Histogram::RChannel)->constBegin();
			i!=image->getHistogram()->get(Histogram::RChannel)->constEnd();++i) {
		double r =i.value();
		r/=totalPixels;
		probR[i.key]= r;
	}
	double DR[256];
	DR[0]=0;
	for (j=0;j<255;++j) {
		DR[j]=DR[j-1]+probR[j];
	}
	double probG[256];
	for (j=0;j<255;++j) {
		probG[j]=0;
	}
	for (i=image->getHistogram()->get(Histogram::GChannel)->constBegin();
			i!=image->getHistogram()->get(Histogram::GChannel)->constEnd();++i) {
		double g =i.value();
		g/=totalPixels;
		probG[i.key]= g;
	}
	double DG[256];
	DG[0]=0;
	for (j=0;j<255;++j) {
		DG[j]=DG[j-1]+probG[j];
	}
	double probB[256];
	for (j=0;j<255;++j) {
		probB[j]=0;
	}
	for (i=image->getHistogram()->get(Histogram::BChannel)->constBegin();
			i!=image->getHistogram()->get(Histogram::BChannel)->constEnd();++i) {
		double b=i.value();
		b/=totalPixels;
		probB[i.key]= b;
	}
	double DB[256];
	DB[0]=0;
	for (j=0;j<255;++j) {
		DB[j]=DB[j-1]+probB[j];
	}
	double probL[256];
	for (j=0;j<255;++j) {
		probL[j]=0;
	}
	for (i=image->getHistogram()->get(Histogram::LChannel)->constBegin();
			i!=image->getHistogram()->get(Histogram::LChannel)->constEnd();++i) {
		double l =i.value();
		l/=totalPixels;
		probL[i.key]= l;
	}
	double DL[256];
	DL[0]=0;
	for (j=0;j<255;++j) {
		DL[j]=DL[j-1]+probL[j];
	}
	if (image->format() == QImage::Format_Indexed8)
	{
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++)
			{
	            QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value

				int l = qGray(pixel);    // Get the 0-255 value of the L channel
				int newL = DL[l]*255;

                newImage->setPixel(x,y, newL);
			}
		}
	}

	else
	{
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++)
			{
				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
				int r = qRed(pixel);    // Get the 0-255 value of the R channel
	            int g = qGreen(pixel);  // Get the 0-255 value of the G channel
	            int b = qBlue(pixel);   // Get the 0-255 value of the B channel

				int newR =DR[r]*255;
				int newG =DR[g]*255;
				int newB =DR[b]*255;

				QColor newPixel = QColor(newR,newG,newB);
				newImage->setPixel(x,y, newPixel.rgb());

			}
		}
	}

    return newImage;
}

