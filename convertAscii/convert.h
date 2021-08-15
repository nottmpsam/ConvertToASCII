#ifndef CONVERT_H
#define CONVERT_H
#include <QImage>
#include <QFile>

class convert
{
    QImage img;
    QFile out;
    int width = 400;
    double coef = 1.3;
    double index(double, double,
                    double, double, double) const;

    enum { asciiLength = 17, asciiLength0 = 20};
    const char asciiTable0[asciiLength0] =
    {
        '@', '&', '#', '$', '%','x', '0',
        'u', 'o', '*', '=', '+', '-', '~',
        ';', ':', 'i' ,'!', ',', '.',

    };
    const char asciiTable[asciiLength] =
    {
        '@', '8', '&', 'W', '#',
        '*', 'o', 'm', 'x',
        '-', '+', '~', '!', ';',
        ':', ',', '.'
    };
    void asciiFirst();
    void asciiSecond();
    int editHeight();
public:
    convert() = default;
    bool loadIMG(const QString&);
    bool loadOUT(const QString&);
    bool startConvert(int);
    void setWidth(int);
    ~convert() { if(out.isOpen()) out.close();}
};

#endif // CONVERT_H
