#include "edge_laplacian_of_gauss.h"

#include "blur_gaussian.h"

EdgeLaplaceOfGauss::EdgeLaplaceOfGauss(PNM* img) :
    Convolution(img)
{
}

EdgeLaplaceOfGauss::EdgeLaplaceOfGauss(PNM* img, ImageViewer* iv) :
    Convolution(img, iv)
{
}

math::matrix<double> EdgeLaplaceOfGauss::getMask(int, Mode)
{
    size = getParameter("size").toInt();
    double sigma = getParameter("sigma").toDouble();

    math::matrix<double> mask(size, size);

	for (int i=0;i<size;i++) {
		int x=i-(size/2);
		for (int j=0;j<size;j++) {
			int y=j-(size/2);
			mask(i,j) = getLoG(x, y, sigma);
		}
	}
	
	return mask;
}

double EdgeLaplaceOfGauss::getLoG(int x, int y, double s)
{

    return ((pow(x,2)+pow(y,2))/pow(s,2) - 2/pow(s,2))*BlurGaussian::getGauss(x,y,s);
}

int EdgeLaplaceOfGauss::getSize()
{
    return size;
}
