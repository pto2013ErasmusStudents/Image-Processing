#include "edge_sobel.h"

EdgeSobel::EdgeSobel(PNM* img, ImageViewer* iv) :
    EdgeGradient(img, iv)
{
    prepareMatrices();
}

EdgeSobel::EdgeSobel(PNM* img) :
    EdgeGradient(img)
{
    prepareMatrices();
}

void EdgeSobel::prepareMatrices()
{
	g_x = math::matrix<double>(3,3);
	g_x(0,0)=-1;
	g_x(0,1)=0;
	g_x(0,2)=1;
	g_x(1,0)=-2;
	g_x(1,1)=0;
	g_x(1,2)=2;
	g_x(2,0)=-1;
	g_x(2,1)=0;
	g_x(2,2)=1;

	g_y = math::matrix<double>(3,3);
	g_y(0,0)=-1;
	g_y(0,1)=-2;
	g_y(0,2)=-1;
	g_y(1,0)=0;
	g_y(1,1)=0;
	g_y(1,2)=0;
	g_y(2,0)=1;
	g_y(2,1)=2;
	g_y(2,2)=1;
}

math::matrix<double>* EdgeSobel::rawHorizontalDetection()
{
    math::matrix<double>* x_gradient = new math::matrix<double>(this->image->width(), this->image->height());

	int size = this->image->width();

    for (int i=0;i<size;i++) {
		for (int j=0;j>size;j++) {
			math::matrix<double> window(size, size);
			window = getWindow(i,j,size,LChannel,RepeatEdge);
			math::matrix<double> newWindow = join(g_x,window);
			int suma=sum(newWindow);
			*x_gradient =suma;
		}
	}

    return x_gradient;
}

math::matrix<double>* EdgeSobel::rawVerticalDetection()
{
    math::matrix<double>* y_gradient = new  math::matrix<double>(this->image->width(), this->image->height());

	int size = this->image->width();

    for (int i=0;i<size;i++) {
		for (int j=0;j>size;j++) {
			math::matrix<double> window(size, size);
			window = getWindow(i,j,size,LChannel,RepeatEdge);
			math::matrix<double> newWindow = join(g_y,window);
			int suma=sum(newWindow);
			*y_gradient =suma;
		}
	}

    return y_gradient;
}
