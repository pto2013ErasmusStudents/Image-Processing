#include "edge_prewitt.h"

EdgePrewitt::EdgePrewitt(PNM*img) :
    EdgeGradient(img)
{
    prepareMatrices();
}

EdgePrewitt::EdgePrewitt(PNM*img, ImageViewer* iv) :
    EdgeGradient(img, iv)
{
    prepareMatrices();
}

void EdgePrewitt::prepareMatrices()
{
	math::matrix<int> g_x(3,3);
	g_x(0,0)=-1;
	g_x(0,1)=0;
	g_x(0,2)=1;
	g_x(1,0)=-1;
	g_x(1,1)=0;
	g_x(1,2)=1;
	g_x(2,0)=-1;
	g_x(2,1)=0;
	g_x(2,2)=1;

	math::matrix<int> g_y(3,3);
	g_x(0,0)=-1;
	g_x(0,1)=-1;
	g_x(0,2)=-1;
	g_x(1,0)=0;
	g_x(1,1)=0;
	g_x(1,2)=0;
	g_x(2,0)=1;
	g_x(2,1)=1;
	g_x(2,2)=1;
}

