#include "edge_laplacian.h"

EdgeLaplacian::EdgeLaplacian(PNM* img) :
    Convolution(img)
{
}

EdgeLaplacian::EdgeLaplacian(PNM* img, ImageViewer* iv) :
    Convolution(img, iv)
{
}

math::matrix<double> EdgeLaplacian::getMask(int, Mode)
{
    int size = getParameter("size").toInt();
    math::matrix<double> mask(size, size);

	int middle=size/2;

    for (int i=0;i<size;i++) {
		for (int j=0;j<size;j++) {
			if (i==middle && j==middle) {
				mask (i,j) = size * size - 1;
			}
			else {
				mask (i,j) = - 1;
			}
		}
	}

    return mask;
}

