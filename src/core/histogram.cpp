#include "histogram.h"

#include <QDebug>
#include <QPainter>

#include <cmath>

Histogram::Histogram(QImage* image)
{
    R = new QHash<int, int>;
    G = new QHash<int, int>;
    B = new QHash<int, int>;
    L = new QHash<int, int>;
    generate(image);
}

Histogram::~Histogram()
{
    delete R;
    delete G;
    delete B;
    delete L;
}

void Histogram::generate(QImage* image)
{

	// Getting the dimensions
    int width  = image->width();
    int height = image->height();

	// Iterate over image space
    for (int x=0; x<width; x++) {
        for (int y=0; y<height; y++)
        {
            QRgb pixel = image->pixel(x,y); // Getting the pixel(x,y) value

            int r = qRed(pixel);    // Get the 0-255 value of the R channel
            int g = qGreen(pixel);  // Get the 0-255 value of the G channel
            int b = qBlue(pixel);   // Get the 0-255 value of the B channel
			int l = qGray(pixel);    // Get the 0-255 value of the L channel

			if (Histogram::get(RChannel)->contains(r)) {
				int value = Histogram::get(RChannel)->value(r);
				Histogram::get(RChannel)->insert (r, value+1);
			}
			else {
				Histogram::get(RChannel)->insert (r,1);
			}
			if (Histogram::get(GChannel)->contains(g)) {
				int value = Histogram::get(GChannel)->value(g);
				Histogram::get(GChannel)->insert (g, value+1);
			}
			else {
				Histogram::get(GChannel)->insert (g,1);
			}
			if (Histogram::get(BChannel)->contains(b)) {
				int value = Histogram::get(BChannel)->value(b);
				Histogram::get(BChannel)->insert (b, value+1);
			}
			else {
				Histogram::get(BChannel)->insert (b,1);
			}
			if (Histogram::get(LChannel)->contains(l)) {
				int value = Histogram::get(LChannel)->value(l);
				Histogram::get(LChannel)->insert (l, value+1);
			}
			else {
				Histogram::get(LChannel)->insert (l,1);
			}
        }
	}
}

/** Returns the maximal value of the histogram in the given channel */
int Histogram::maximumValue(Channel selectedChannel = RGB)
{
	QHash<int, int>::const_iterator i;
	int aux=0;
	for (i=Histogram::get(RChannel)->constBegin();i!=Histogram::get(RChannel)->constEnd();++i) {
		if (i.value()>aux) {
			aux=i.value();
		}
	}
	for (i=Histogram::get(GChannel)->constBegin();i!=Histogram::get(GChannel)->constEnd();++i) {
		if (i.value()>aux) {
			aux=i.value();
		}
	}
	for (i=Histogram::get(BChannel)->constBegin();i!=Histogram::get(BChannel)->constEnd();++i) {
		if (i.value()>aux) {
			aux=i.value();
		}
	}
	for (i=Histogram::get(LChannel)->constBegin();i!=Histogram::get(LChannel)->constEnd();++i) {
		if (i.value()>aux) {
			aux=i.value();
		}
	}	
    return aux;
}


/** Returns a pointer to the given channel QHash<int, int> */
QHash<int, int>* Histogram::get(Channel channel = LChannel)
{
    if (channel==LChannel) return L;
    if (channel==RChannel) return R;
    if (channel==GChannel) return G;
    if (channel==BChannel) return B;

    return 0;
}

/**
 *  Returns a 255 by 100 QImage containing a Histogram for the given channel.
 *  The background is transparent (Alpha 0, RGB=255) */
QImage Histogram::getImage(Channel channel = LChannel, QBrush pen = Qt::gray)
{
    // Create blank QImage and fill it with transparent background:
    QImage histImage(255, 100, QImage::Format_ARGB32);
    histImage.fill(0);
    QPainter painter(&histImage);
    painter.setBrush(Qt::transparent); 
    painter.setPen(Qt::transparent);
    painter.drawRect(0,0,255,100);

    // Calculate the aspect ratio using the maximal value of the color histograms
    int maximum = maximumValue(RGB);
    float ratio = 100.0/float(maximum);

    // Preparing the painter:
    painter.setBrush(pen);
    painter.setPen(pen.color());

    int h;
    // Draw histogram
    QHash<int, int>* hist = get(channel);
    QHash<int, int>::const_iterator cit = hist->begin();

    while (cit != hist->end())
    {
        h = 100 - floor(ratio*cit.value());
        painter.drawLine(cit.key(), h, cit.key(), 100);
        ++cit;
    }

    return histImage;
}
