#include "bin_iterbimodal.h"

BinarizationIterBimodal::BinarizationIterBimodal(PNM* img) :
    Transformation(img)
{
}

BinarizationIterBimodal::BinarizationIterBimodal(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

PNM* BinarizationIterBimodal::transform()
{
    int width = image->width();
    int height = image->height();

    PNM* newImage = new PNM(width, height, QImage::Format_Mono);

	int T = 0;
	int T_new=127;

	if (image->format() == QImage::Format_Mono) {
	}
	else if (image->format() == QImage::Format_Indexed8) {
		while (T!=T_new) {
			int Tw=0;
			int iw=0;
			int Tb=0;
			int ib=0;
			T=T_new;
			for (int x=0; x<width; x++) {
				for (int y=0; y<height; y++) {
					QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
					int val = qGray(pixel);

					if (val>T) {
						Tw+=val;
						iw++;
					}
					else {
						Tb+=val;
						ib++;
					}
				}
			}
			T_new = ((Tw/iw) + (Tb/ib)) / 2;
		}
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {
				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
				int l = qGray(pixel);

				newImage->setPixel(x,y, l < T ? Qt::color0 : Qt::color1);

			}
		}
    }
	else { //if (image->format() == QImage::Format_RGB32)
		while (T!=T_new) {
			int Tw=0;
			int iw=0;
			int Tb=0;
			int ib=0;
			T=T_new;
			for (int x=0; x<width; x++) {
				for (int y=0; y<height; y++) {
					QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
					int r = qRed(pixel);
					int g = qGreen(pixel);
					int b = qBlue(pixel);
					int val = (r+g+b)/3;

					if (val>T) {
						Tw+=val;
						iw++;
					}
					else {
						Tb+=val;
						ib++;
					}
				}
			}
			T_new = ((Tw/iw) + (Tb/ib)) / 2;
		}
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {

				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
				int r = qRed(pixel);    // Get the 0-255 value of the R channel
                int g = qGreen(pixel);  // Get the 0-255 value of the G channel
                int b = qBlue(pixel);   // Get the 0-255 value of the B channel

				int t = (r+g+b)/3;

				newImage->setPixel(x,y, t < T ? Qt::color0 : Qt::color1);

			}
		}
	}
    return newImage;

}



