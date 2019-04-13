#ifndef SIGN_PEN_H_INCLUDED
#define SIGN_PEN_H_INCLUDED
#include "writing_instruments.h"

class sign_pen:public writing_instruments
{
private:
    std::string colour;
    std::string apply_to;
    double nib_diameter;
public:
    sign_pen(int,double,std::string);
    virtual ~sign_pen();
    void show();
    void add(int);
    void _minus(int);
};

#endif // SIGN_PEN_H_INCLUDED
