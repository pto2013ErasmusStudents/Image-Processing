#include "edge_roberts.h"

EdgeRoberts::EdgeRoberts(PNM* img) :
    EdgeGradient(img)
{
    prepareMatrices();
}

EdgeRoberts::EdgeRoberts(PNM* img, ImageViewer* iv) :
    EdgeGradient(img, iv)
{
    prepareMatrices();
}

void EdgeRoberts::prepareMatrices()
{
	math::matrix<int> g_x(2,2);
	g_x(0,0)=1;
	g_x(0,1)=0;
	g_x(1,0)=0;
	g_x(1,1)=-1;

	math::matrix<int> g_y(2,2);
	g_x(0,0)=0;
	g_x(0,1)=1;
	g_x(1,0)=-1;
	g_x(1,1)=0;

}
