#include "histogram_equalization.h"

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
	int minR = 1;
	int maxR = 0;
	for (i=image->getHistogram()->get(Histogram::RChannel)->constBegin();
			i!=image->getHistogram()->get(Histogram::RChannel)->constEnd();++i) {
		if (((double) i.value()/totalPixels)>maxR) {
			maxR=i.value();
			maxR/=totalPixels;
		}
		if (((double)i.value()/totalPixels)<minR) {
			minR=i.value();
			minR/=totalPixels;
		}
	}
	int minG = 1;
	int maxG = 0;
	for (i=image->getHistogram()->get(Histogram::GChannel)->constBegin();
			i!=image->getHistogram()->get(Histogram::GChannel)->constEnd();++i) {
		if (((double) i.value()/totalPixels)>maxG) {
			maxG=i.value();
			maxG/=totalPixels;
		}
		if (((double)i.value()/totalPixels)<minG) {
			minG=i.value();
			minG/=totalPixels;
		}
	}
	int minB = 1;
	int maxB = 0;
	for (i=image->getHistogram()->get(Histogram::BChannel)->constBegin();
			i!=image->getHistogram()->get(Histogram::BChannel)->constEnd();++i) {
		if (((double) i.value()/totalPixels)>maxB) {
			maxB=i.value();
			maxB/=totalPixels;
		}
		if (((double)i.value()/totalPixels)<minB) {
			minB=i.value();
			minB/=totalPixels;
		}
	}
	double minL = 1;
	double maxL = 0;
	for (i=image->getHistogram()->get(Histogram::LChannel)->constBegin();
			i!=image->getHistogram()->get(Histogram::LChannel)->constEnd();++i) {
		if (((double) i.value()/totalPixels)>maxL) {
			maxL=i.value();
			maxL/=totalPixels;
		}
		if (((double)i.value()/totalPixels)<minL) {
			minL=i.value();
			minL/=totalPixels;
		}
	}

	if (image->format() == QImage::Format_Indexed8)
	{
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++)
			{
	            QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value

				int l = qGray(pixel);    // Get the 0-255 value of the L channel
				int lValue = image->getHistogram()->get(Histogram::LChannel)->value(l);
				double p = lValue;
				p/=totalPixels;

				l = (255/(maxL-minL))*(p-minL);

                newImage->setPixel(x,y, l);
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
				int rValue = image->getHistogram()->get(Histogram::RChannel)->value(r);
				double pRed = rValue;
				pRed/=totalPixels;
				r = (255/(maxR-minR))*(pRed-minR);
	            int g = qGreen(pixel);  // Get the 0-255 value of the G channel
				int gValue = image->getHistogram()->get(Histogram::GChannel)->value(g);
				double pGreen = gValue;
				pGreen/=totalPixels;
				g = (255/(maxG-minG))*(pGreen-minR);
	            int b = qBlue(pixel);   // Get the 0-255 value of the B channel
				int bValue = image->getHistogram()->get(Histogram::BChannel)->value(b);
				double pBlue = bValue;
				pBlue/=totalPixels;
				b = (255/(maxB-minB))*(pBlue-minB);

				QColor newPixel = QColor(r,g,b);
				newImage->setPixel(x,y, newPixel.rgb());

			}
		}
	}

    return newImage;
}

