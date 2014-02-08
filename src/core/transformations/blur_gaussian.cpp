#include "blur_gaussian.h"

BlurGaussian::BlurGaussian(PNM* img) :
    Convolution(img)
{
}

BlurGaussian::BlurGaussian(PNM* img, ImageViewer* iv) :
    Convolution(img, iv)
{
}

PNM* BlurGaussian::transform()
{
    emit message("Blurring...");

    int size = getParameter("size").toInt();
    radius = (size/2)+1;
    sigma = getParameter("sigma").toDouble();

    return convolute(getMask(size, Normalize), RepeatEdge);
}

math::matrix<double> BlurGaussian::getMask(int size, Mode)
{
	math::matrix<double> mask(size, size);

	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++){
			mask(i,j)=getGauss(i,j,sigma);
		}
	}

    return mask;
}

double BlurGaussian::getGauss(int x, int y, double sigma)
{    

	double pi=3.14159;
	double value = (1/(2*pi*sigma*sigma))*exp(-(x^2+y^2)/(2*sigma*sigma));


    return value;
}

