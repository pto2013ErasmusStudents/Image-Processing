#include "map_height.h"
#include "conversion_grayscale.h"


MapHeight::MapHeight(PNM* img) :
    Transformation(img)
{
}

MapHeight::MapHeight(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

PNM* MapHeight::transform()
{
    int width  = image->width(),
        height = image->height();

    PNM* newImage = new PNM(width, height, QImage::Format_Indexed8);
	
	//ConversionGrayscale conversion = ConversionGrayscale::ConversionGrayscale(image);
	//newImage = ConversionGrayscale::transform();

	if (image->format() == QImage::Format_Mono) {
		// Iterate over image space
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {
				QColor color = QColor::fromRgb(image->pixel(x,y)); // Getting the pixel(x,y) value

				int v;
				if (color==Qt::white){
					v=255;
				}
				else {
					v=0;
				}
                newImage->setPixel(x,y, v);
			}
		}
    }
    else {
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {
				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value

				int v = 0.3*qRed(pixel)+0.6*qGreen(pixel)+0.1*qBlue(pixel);    // Get the 0-255 value of the L channel
				
				newImage->setPixel(x,y, v);
			}
		}
	}

	return newImage;
}