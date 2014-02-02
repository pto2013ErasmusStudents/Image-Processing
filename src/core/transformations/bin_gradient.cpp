#include "bin_gradient.h"

BinarizationGradient::BinarizationGradient(PNM* img) :
    Transformation(img)
{
}

BinarizationGradient::BinarizationGradient(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

PNM* BinarizationGradient::transform()
{
    int width = image->width();
    int height = image->height();

    PNM* newImage = new PNM(width, height, QImage::Format_Indexed8);

	if (image->format() == QImage::Format_Mono) {
	}
	else if (image->format() == QImage::Format_Indexed8) {
    }
	else { //if (image->format() == QImage::Format_RGB32)
		// Iterate over image space
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {

				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
				int r = qRed(pixel);    // Get the 0-255 value of the R channel
                int g = qGreen(pixel);  // Get the 0-255 value of the G channel
                int b = qBlue(pixel);   // Get the 0-255 value of the B channel

				int t = (r+g+b)/3;
				int newT;
				if (t<threshold) {
					newT=0;
				}
				else {
					newT=255;
				}
				newImage->setPixel(x,y, newT);

			}
		}
	}
    return newImage;

    return newImage;
}


