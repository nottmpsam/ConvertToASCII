#include "convert.h"
#include <QTextStream>

double convert::index(double rgb, double start1, double stop1, double start2, double stop2) const
{
    return start2 + ((rgb - start1) / (stop1 - start1)) * (stop2 - start2);
}
bool convert::loadIMG(const QString& str)
{
    return img.load(str);
}
bool convert::loadOUT(const QString& str)
{
   out.setFileName(str);
   return out.open(QIODevice::WriteOnly | QIODevice::Text);
}
void convert::setWidth(int _width)
{
    if (_width > 200) {
        width = _width;
    }
}
int convert::editHeight()
{
    return img.height() / coef * width/ img.width();
}
void convert::asciiFirst()
{
    QTextStream output(&out);
    int _gray, _index;
    for (int i = 0; i < img.height(); ++i)
    {
        for (int j = 0; j < img.width(); ++j)
        {
            QColor color(img.pixel(j, i));
            _gray = (color.red() + color.green() + color.blue()) / 3;
            img.setPixel(j,i, qRgb(_gray, _gray, _gray));
            _index = index(_gray, 0, 255, 0, asciiLength - 1);
            output << asciiTable[_index];
        }
      output << '\n';
    }
}
void convert::asciiSecond()
{
    QTextStream output(&out);
    int _gray, _index;
    for (int i = 0; i < img.height(); ++i)
    {
        for (int j = 0; j < img.width(); ++j)
        {
            QColor color(img.pixel(j, i));
            _gray = (color.red() + color.green() + color.blue()) / 3;
            img.setPixel(j,i, qRgb(_gray, _gray, _gray));
            _index = index(_gray, 0, 255, 0, asciiLength0 - 1);
            output << asciiTable0[_index];
        }
      output << '\n';
    }
}
bool convert::startConvert(int choice)
{
   if (!img.isNull() && out.isOpen()) {
       const int _height = editHeight();

       img = img.scaled(width, _height, Qt::KeepAspectRatio);
       choice > 0 ? asciiFirst() : asciiSecond();
       out.close();
       return true;
   }
   return false;
}
