#include "convolution.h"

/** Overloaded constructor */
Convolution::Convolution(PNM* img) :
    Transformation(img)
{
}

Convolution::Convolution(PNM* img, ImageViewer* iv) :
    Transformation(img, iv)
{
}

/** Returns a convoluted form of the image */
PNM* Convolution::transform()
{
    return convolute(getMask(3, Normalize), RepeatEdge);
}

/** Returns a sizeXsize matrix with the center point equal 1.0 */
math::matrix<double> Convolution::getMask(int size, Mode mode = Normalize)
{
    math::matrix<double> mask(size, size);

	int i,j;
	for (i=0;i<size;++i) {
		for (j=0;j<size;j++) {
			if (i==size/2 && j==size/2) {
				mask(i,j)=1;
			}
			else {
				mask(i,j)=0;
			}
		}
	}

    return mask;
}

/** Does the convolution process for all pixels using the given mask. */
PNM* Convolution::convolute(math::matrix<double> mask, Mode mode = RepeatEdge)
{
    int width  = image->width(),
        height = image->height();

    PNM* newImage = new PNM(width, height, image->format());

	if (image->format() == QImage::Format_Indexed8) {
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {

				double weight = sum(mask);
				int size = mask.RowNo();
			
				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value

				int l = qGray(pixel);   // Get the 0-255 value of the L channel

				math::matrix<double> window = Transformation::getWindow(x,y, size, LChannel, mode);
				math::matrix<double> accumulator = join(window, mask);
				double sumAc = sum(accumulator);
				if (weight!=0) {
					sumAc/=weight;
				}
				l = sumAc;
				l = (l>PIXEL_VAL_MAX ? PIXEL_VAL_MAX : l);
				l = (l<PIXEL_VAL_MIN ? PIXEL_VAL_MIN : l);

				newImage->setPixel(x,y, l);

			}
		}
	}
	else {
		// Iterate over image space
		for (int x=0; x<width; x++) {
			for (int y=0; y<height; y++) {

				double weight = sum(mask);
				int size = mask.RowNo();
			
				QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value
				int r;    // Get the 0-255 value of the R channel
				int g;  // Get the 0-255 value of the G channel
				int b;   // Get the 0-255 value of the B channel

				math::matrix<double> window = Transformation::getWindow(x,y, size, RChannel, mode);
				math::matrix<double> accumulator = join(window, mask);
				double sumAc = sum(accumulator);
				if (weight!=0) {
					sumAc/=weight;
				}
				r = sumAc;
				r = (r>PIXEL_VAL_MAX ? PIXEL_VAL_MAX : r);
				r = (r<PIXEL_VAL_MIN ? PIXEL_VAL_MIN : r);

				window = Transformation::getWindow(x,y, size, GChannel, mode);
				accumulator = join(window, mask);
				sumAc = sum(accumulator);
				if (weight!=0) {
					sumAc/=weight;
				}
				g = sumAc;
				g = (g>PIXEL_VAL_MAX ? PIXEL_VAL_MAX : g);
				g = (g<PIXEL_VAL_MIN ? PIXEL_VAL_MIN : g);

				window = Transformation::getWindow(x,y, size, BChannel, mode);
				accumulator = join(window, mask);
				sumAc = sum(accumulator);
				if (weight!=0) {
					sumAc/=weight;
				}
				b = sumAc;
				b = (b>PIXEL_VAL_MAX ? PIXEL_VAL_MAX : b);
				b = (b<PIXEL_VAL_MIN ? PIXEL_VAL_MIN : b);

				QColor newPixel = QColor(r,g,b);
				newImage->setPixel(x,y, newPixel.rgb());

			}
		}
	}

    return newImage;
}

/** Joins to matrices by multiplying the A[i,j] with B[i,j].
  * Warning! Both Matrices must be squares with the same size!
  */
const math::matrix<double> Convolution::join(math::matrix<double> A, math::matrix<double> B)
{
    int size = A.RowNo();
    math::matrix<double> C(size, size);

    int i,j;
	for (i=0;i<size;++i) {
		for (j=0;j<size;j++) {
			C(i,j)=A(i,j)*B(i,j);
		}
	}

    return C;
}

/** Sums all of the matrixes elements */
const double Convolution::sum(const math::matrix<double> A)
{
    double sum = 0.0;

    int size = A.RowNo();
    int i,j;
	for (i=0;i<size;++i) {
		for (j=0;j<size;j++) {
			sum+=A(i,j);
		}
	}

    return sum;

}
