#include "morph_openclose.h"

#include "morph_erode.h"
#include "morph_dilate.h"

MorphOpenClose::MorphOpenClose(PNM* img) :
    MorphologicalOperator(img), m_type(Open)
{
}

MorphOpenClose::MorphOpenClose(PNM* img, ImageViewer* iv) :
    MorphologicalOperator(img, iv), m_type(Open)
{
}

PNM* MorphOpenClose::transform()
{
    int size = getParameter("size").toInt();;
    SE shape = (SE) getParameter("shape").toInt();
    m_type = (Type) getParameter("type").toInt();

	PNM* newImage = new PNM(image->width(), image->height(), QImage::Format_RGB32);
	PNM* newImage2 = new PNM(image->width(), image->height(), QImage::Format_RGB32);
	
	//switch (m_type) {
	//	case Open: {
	//		newImage = dilate(image, size, shape);
	//		newImage2 = erode(newImage, size, shape);
	//	}
	//	case Close: {
	//		newImage = erode(image, size, shape);
	//		newImage2 = dilate(newImage, size, shape);
	//	}
	//	default:;
	//}


	if (m_type==Open) {
		newImage = erode(image, size, shape);
		newImage2 = dilate(newImage, size, shape);
	}
	else {
		newImage = dilate(image, size, shape);
		newImage2 = erode(newImage, size, shape);
	}

    return newImage2;
}

PNM* MorphOpenClose::erode(PNM* image, int size, SE shape)
{
    MorphErode e(image, getSupervisor());
    e.setParameter("silent", true);
    e.setParameter("shape", shape);
    e.setParameter("size", size);

    return e.transform();
}

PNM* MorphOpenClose::dilate(PNM* image, int size, SE shape)
{
    MorphDilate e(image, getSupervisor());
    e.setParameter("silent", true);
    e.setParameter("shape", shape);
    e.setParameter("size", size);

    return e.transform();
}
