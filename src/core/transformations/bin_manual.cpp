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

	if (image->format() == QImage::Format_Mono) {
	}
	else if (image->format() == QImage::Format_Indexed8) {
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {
				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
				int l = qGray(pixel);

				newImage->setPixel(x,y, l < threshold ? Qt::color0 : Qt::color1);

			}
		}
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

				newImage->setPixel(x,y, t < threshold ? Qt::color0 : Qt::color1);

			}
		}
	}
    return newImage;
}




