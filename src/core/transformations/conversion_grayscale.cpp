#include "conversion_grayscale.h"

ConversionGrayscale::ConversionGrayscale(PNM* img) :
    Transformation(img)
{
}

ConversionGrayscale::ConversionGrayscale(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

PNM* ConversionGrayscale::transform()
{

    int width  = image->width();
    int height = image->height();

	PNM* newImage = new PNM(width, height, QImage::Format_Indexed8);

    if (image->format() == QImage::Format_Mono)
    {
    }
    else //if (image->format() == QImage::Format_RGB32)
    {
		// Iterate over image space
        for (int x=0; x<width; x++)
            for (int y=0; y<height; y++)
            {
                QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value

                int v = 0.3*qRed(pixel)+0.6*qGreen(pixel)+0.1*qBlue(pixel);    // Get the 0-255 value of the L channel

                newImage->setPixel(x,y, v);
            }

    }

    return newImage;
}
