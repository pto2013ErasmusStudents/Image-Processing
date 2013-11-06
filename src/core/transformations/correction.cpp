#include "correction.h"

Correction::Correction(PNM* img) :
    Transformation(img)
{
}

Correction::Correction(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

PNM* Correction::transform()
{
    double shift  = getParameter("shift").toDouble();
    double factor = getParameter("factor").toDouble();
    double gamma  = getParameter("gamma").toDouble();

    int width  = image->width();
    int height = image->height();

    PNM* newImage = new PNM(width, height, image->format());

    if (image->format() == QImage::Format_Indexed8)
    {

    }
    else //if (image->format() == QImage::Format_RGB32)
    {
        // Iterate over image space
        for (int x=0; x<width; x++)
            for (int y=0; y<height; y++)
            {
                QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value

                int r = qRed(pixel);    // Get the 0-255 value of the R channel
                int g = qGreen(pixel);  // Get the 0-255 value of the G channel
                int b = qBlue(pixel);   // Get the 0-255 value of the B channel
                r = min(PIXEL_VAL_MAX,max(add(r,shift), PIXEL_VAL_MIN));
				g = min(PIXEL_VAL_MAX,max(add(g,shift), PIXEL_VAL_MIN));
                b = min(PIXEL_VAL_MAX,max(add(b,shift), PIXEL_VAL_MIN));
				r = mult(r,factor);
				g = mult(g,factor);
				b = mult(b,factor);
				if (r<PIXEL_VAL_MIN) {
					r = PIXEL_VAL_MIN;
				}
				if (r>PIXEL_VAL_MAX) {
					r = PIXEL_VAL_MAX;
				}
				if (g<PIXEL_VAL_MIN) {
					g = PIXEL_VAL_MIN;
				}
				if (g>PIXEL_VAL_MAX) {
					g = PIXEL_VAL_MAX;
				}
				if (b<PIXEL_VAL_MIN) {
					b = PIXEL_VAL_MIN;
				}
				if (b>PIXEL_VAL_MAX) {
					b = PIXEL_VAL_MAX;
				}
                r = min(PIXEL_VAL_MAX,max(power(r,gamma), PIXEL_VAL_MIN));
				g = min(PIXEL_VAL_MAX,max(power(g,gamma), PIXEL_VAL_MIN));
                b = min(PIXEL_VAL_MAX,max(power(b,gamma), PIXEL_VAL_MIN));
                QColor newPixel = QColor(r,g,b);
                newImage->setPixel(x,y, newPixel.rgb());
            }
    }

    return newImage;
}

const int Correction::add(int value, double shift)
{
    return value+shift;
}

const  double Correction::mult(int value, double factor)
{
    return value*factor;
}

const int Correction::power(int value, double power)
{
    return pow(value, power);
}
