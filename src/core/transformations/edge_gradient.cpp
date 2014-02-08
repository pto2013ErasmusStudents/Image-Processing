#include "edge_gradient.h"

EdgeGradient::EdgeGradient(PNM* img, ImageViewer* iv) :
    Convolution(img, iv)
{
}

EdgeGradient::EdgeGradient(PNM* img) :
    Convolution(img)
{
}

PNM* EdgeGradient::verticalDetection()
{
    return convolute(g_y, RepeatEdge);
}

PNM* EdgeGradient::horizontalDetection()
{
    return convolute(g_x, RepeatEdge);
}

PNM* EdgeGradient::transform()
{
    PNM* newImage = new PNM(image->width(), image->height(), image->format());

	PNM* xImage = horizontalDetection();
	PNM* yImage = verticalDetection();

	if (image->format() == QImage::Format_Mono) {
	}
	else if (image->format() == QImage::Format_Indexed8) {
		for (int x=0;x<image->width();x++) {
			for (int y=0;y<image->height();y++) {
				int x_pixel = qGray(xImage->pixel(x,y));
				int y_pixel = qGray(yImage->pixel(x,y));
				
				double v = sqrt(pow(x_pixel,2)+pow(y_pixel,2));

				newImage->setPixel(x,y, v);
			}
		}
	}
	else { //if (image->format() == QImage::Format_RGB32)
		for (int x=0;x<image->width();x++) {
			for (int y=0;y<image->height();y++) {
				int x_pixelR = qRed(xImage->pixel(x,y));
				int y_pixelR = qRed(yImage->pixel(x,y));
				int x_pixelG = qGreen(xImage->pixel(x,y));
				int y_pixelG = qGreen(yImage->pixel(x,y));
				int x_pixelB = qBlue(xImage->pixel(x,y));
				int y_pixelB = qBlue(yImage->pixel(x,y));
				
				double r = sqrt(pow(x_pixelR,2)+pow(y_pixelR,2));
				double g = sqrt(pow(x_pixelG,2)+pow(y_pixelG,2));
				double b = sqrt(pow(x_pixelB,2)+pow(y_pixelB,2));

				QColor newPixel = QColor(r,g,b);
				newImage->setPixel(x,y, newPixel.rgb());
			}
		}
	}

    return newImage;
}

