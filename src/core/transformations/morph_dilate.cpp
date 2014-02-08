#include "morph_dilate.h"

MorphDilate::MorphDilate(PNM* img) :
    MorphologicalOperator(img)
{
}

MorphDilate::MorphDilate(PNM* img, ImageViewer* iv) :
    MorphologicalOperator(img, iv)
{
}

const int MorphDilate::morph(math::matrix<double> window, math::matrix<bool> se)
{
    double min = PIXEL_VAL_MAX+1;

	int size = window.ColNo();

	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++){
			if (se(i,j)) {
				if (window(i,j)<min) {
					min=window(i,j);
				}
			}
		}
	}

    return min;
}
