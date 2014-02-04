#include "bin_otsu.h"

#include "histogram_equalization.h"
#include "../histogram.h"

BinarizationOtsu::BinarizationOtsu(PNM* img) :
    Transformation(img)
{
}

BinarizationOtsu::BinarizationOtsu(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

PNM* BinarizationOtsu::transform()
{
    int width = image->width();
    int height = image->height();

    PNM* newImage = new PNM(width, height, QImage::Format_Mono);

	HistogramEqualization::HistogramEqualization(image);

	double bcv[256];
	int T;
	if (image->format() == QImage::Format_Mono) {
	}
	else if (image->format() == QImage::Format_Indexed8) {
		for (int T=0; T<255;T++) {
			int sum1=0;
			int j;
			for (j=0; j<T;j++) {
				int value = image->getHistogram()->get(Histogram::LChannel)->value(j);
				sum1+=value;
			}
			double W_b = sum1 / pow(255, 2);
			int sum2=0;
			for (j=0; j<T;j++) {
				int value = image->getHistogram()->get(Histogram::LChannel)->value(j);
				sum2+=value*j;
			}
			double u_b;
			if (sum1==0) {
				u_b = 0;
			}
			else {
				u_b = sum2 / sum1;
			}
			sum1=0;
			sum2=0;
			for (j=T; j<255;j++) {
				int value = image->getHistogram()->get(Histogram::LChannel)->value(j);
				sum1+=value;
			}
			double W_f = sum1 / pow(255, 2);
			for (j=T; j<255;j++) {
				int value = image->getHistogram()->get(Histogram::LChannel)->value(j);
				sum2+=value*j;
			}
			double u_f;
			if (sum1==0) {
				u_f = 0;
			}
			else {
				u_f = sum2 / sum1;
			}
			bcv[T]= W_b * W_f * pow(u_b - u_f, 2);
		}
		int T=0;
		for (int j=0;j<255;j++) {
			if (bcv[j]>bcv[T]) {T=j;}
		}
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {
				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
				int l = qGray(pixel);

				newImage->setPixel(x,y, l < T ? Qt::color0 : Qt::color1);

			}
		}
	}
	else { //if (image->format() == QImage::Format_RGB32)
		for (int T=0; T<255;T++) {
			int sum1=0;
			int j;
			for (j=0; j<T;j++) {
				int value = image->getHistogram()->get(Histogram::LChannel)->value(j);
				sum1+=value;
			}
			double W_b = sum1 / pow(255, 2);
			int sum2=0;
			for (j=0; j<T;j++) {
				int value = image->getHistogram()->get(Histogram::LChannel)->value(j);
				sum2+=value*j;
			}
			double u_b;
			if (sum1==0) {
				u_b = 0;
			}
			else {
				u_b = sum2 / sum1;
			}
			sum1=0;
			sum2=0;
			for (j=T; j<255;j++) {
				int value = image->getHistogram()->get(Histogram::LChannel)->value(j);
				sum1+=value;
			}
			double W_f = sum1 / pow(255, 2);
			for (j=T; j<255;j++) {
				int value = image->getHistogram()->get(Histogram::LChannel)->value(j);
				sum2+=value*j;
			}
			double u_f;
			if (sum1==0) {
				u_f = 0;
			}
			else {
				u_f = sum2 / sum1;
			}
			bcv[T]= W_b * W_f * pow(u_b - u_f, 2);
		}
		int T=0;
		for (int j=0;j<255;j++) {
			if (bcv[j]>bcv[T]) {T=j;}
		}
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {
				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
				int r = qRed(pixel);
				int g = qGreen(pixel);
				int b = qBlue(pixel);
				int val = (r+g+b)/3;

				newImage->setPixel(x,y, val < T ? Qt::color0 : Qt::color1);

			}
		}
	}

    return newImage;
}

