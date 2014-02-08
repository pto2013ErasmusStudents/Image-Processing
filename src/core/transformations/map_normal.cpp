#include "map_normal.h"

#include "edge_sobel.h"
#include "map_height.h"

MapNormal::MapNormal(PNM* img) :
    Convolution(img)
{
}

MapNormal::MapNormal(PNM* img, ImageViewer* iv) :
    Convolution(img, iv)
{
}

PNM* MapNormal::transform()
{
    int width  = image->width(),
        height = image->height();

    double strength = getParameter("strength").toDouble();

    PNM* newImage = new PNM(width, height, image->format());

	//MapHeight map = MapHeight::MapHeight(image);
	//newImage = map.transform;

	//math::matrix<double>* G_x = new  math::matrix<double>(this->image->width(), this->image->height());
	//EdgeSobel edge = EdgeSobel::EdgeSobel(image);
	//G_x = edge.rawHorizontalDetection;
	//math::matrix<double>* G_y = new  math::matrix<double>(this->image->width(), this->image->height());
	//G_y = edge.rawVerticalDetection;

	//for (int i=0; i<width;i++) {
	//	for (int j=0; j<height;j++) {

	//		double dZ = 1/strength;
	//	}
	//}

    return newImage;
}
