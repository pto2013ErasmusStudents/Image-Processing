#include "edge_zero.h"

#include "edge_laplacian_of_gauss.h"

EdgeZeroCrossing::EdgeZeroCrossing(PNM* img) :
    Convolution(img)
{
}

EdgeZeroCrossing::EdgeZeroCrossing(PNM* img, ImageViewer* iv) :
    Convolution(img, iv)
{
}

PNM* EdgeZeroCrossing::transform()
{
    int width = image->width(),
        height = image->height();

    int    size  = getParameter("size").toInt();
    double sigma = getParameter("sigma").toDouble();
    int    t     = getParameter("threshold").toInt();

    PNM* newImage = new PNM(width, height, QImage::Format_Indexed8);

	EdgeLaplaceOfGauss::EdgeLaplaceOfGauss(image);
    int v_0=128;

	if (image->format() == QImage::Format_Mono) {
	}
	else if (image->format() == QImage::Format_Indexed8) {
		// Iterate over image space
		for (int x=0; x<image->width(); x++) {
			for (int y=0; y<image->height(); y++) {
				math::matrix<double> window(size,size);
				window=getMask(size, RepeatEdge);
				int min=PIXEL_VAL_MAX+1, max=0;
				for (int i=0;i<size;i++) {
					for (int j=0;j<size;j++) {
						if (window(i,j)>max) {
							max = window(i,j);
						}
						if (window(i,j)<min) {
							min = window(i,j);
						}
					}
				}
				if (min<(v_0-t) && max>(v_0+t)) {
					QRgb pixel = image->pixel(x,y);
	                newImage->setPixel(x,y, pixel);
				}
				else {
					newImage->setPixel(x,y, 0);
				}
			}
		}
	}
	else { //if (image->format() == QImage::Format_RGB32)
		for (int x=0; x<image->width(); x++) {
			for (int y=0; y<image->height(); y++){
				math::matrix<double> window(size,size);
				window=getMask(size, RepeatEdge);
				int min=255, max=0;
				for (int i=0;i<size;i++) {
					for (int j=0;j<size;j++) {
						if (window(i,j)>max) {
							max = window(i,j);
						}
						if (window(i,j)<min) {
							min = window(i,j);
						}
					}
				}
				if (min<(v_0-t) && max>(v_0+t)) {
					QRgb pixel = image->pixel(x,y);
	                newImage->setPixel(x,y, pixel);
				}
				else {
					newImage->setPixel(x,y, 0);
				}
			}
		}
	}

    return newImage;
}

