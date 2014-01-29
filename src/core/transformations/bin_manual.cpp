#include "bin_manual.h"

BinarizationManual::BinarizationManual(PNM* img) :
    Transformation(img)
{
}

BinarizationManual::BinarizationManual(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

PNM* BinarizationManual::transform()
{
    int threshold = getParameter("threshold").toInt();

    int width  = image->width();
    int height = image->height();

    PNM* newImage = new PNM(width, height, QImage::Format_Mono);

	// Iterate over image space
	for (int x=0; x<width; x++) {
		for (int y=0; y<height; y++) {

			//QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
			//
			//if (pixel<threshold) {
			//	pixel = 0;
			//}
			//else {
			//	pixel = 255;
			//}
			//
			//newImage->setPixel(x,y, pixel);
			
		}
	}
    return newImage;
}




