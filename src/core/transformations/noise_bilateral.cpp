#include "noise_bilateral.h"

NoiseBilateral::NoiseBilateral(PNM* img) :
    Convolution(img)
{
}

NoiseBilateral::NoiseBilateral(PNM* img, ImageViewer* iv) :
    Convolution(img, iv)
{
}

PNM* NoiseBilateral::transform()
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
				int v = getNeighbours(x, y, LChannel);    // Get the 0-255 value of the L channel
				
				newImage->setPixel(x,y, v);
			}
		}
	}
	else { //if (image->format() == QImage::Format_RGB32)
		// Iterate over image space
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++){
				int r = getNeighbours(x, y, RChannel);
				int g = getNeighbours(x, y, GChannel);
				int b = getNeighbours(x, y, BChannel);

                QColor newPixel = QColor(r,g,b);
                newImage->setPixel(x,y, newPixel.rgb());
			}
		}
	}

    return newImage;
}

int NoiseBilateral::getNeighbours(int x, int y, Channel channel)
{
    int sigma_d = getParameter("sigma_d").toInt();
    int sigma_r = getParameter("sigma_r").toInt();
    int radius = sigma_d;
	
	int size = radius*2+1;
    math::matrix<double> window(size,size);

	double val=0, k=0;

	for (int i=x-size/2; i<=x+size/2; i++) {
		for (int j=y-size/2; j<=y+size/2; j++) {
			double valG;
			double kernels = g(i, j, sigma_d)*r(val, 0, sigma_r);

			int v=0;
			QRgb pixel= getPixel(i, j, RepeatEdge);
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
			val+=v*kernels;
			k+=kernels;
		}
	}    

    return val/k;
}

double NoiseBilateral::g(int x, int y, int sigma_d)
{

	double pi=3.14159;
	double expo = exp(-(pow(x,2) + pow(y,2))/(2*(pow(sigma_d,2))));
	double val1 = (1/(2*pi*(pow(sigma_d,2)))); 
	double val = val1*expo;

    return val;
}

double NoiseBilateral::r(int v, int v_ij, int sigma_r)
{
	double pi=3.14159;
	int x=v_ij-v;

	double val = (1/(sigma_r*sqrt(2*pi)))*exp(-(pow(x,2))/(2*pow(sigma_r,2)));

    return val;
}
