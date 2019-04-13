#ifndef PEN_H_INCLUDED
#define PEN_H_INCLUDED
#include "writing_instruments.h"

class pen:public writing_instruments
{
private:
    std::string nib;
    std::string colour;
    //enum colour{Red,Orange,Yellow,Green,Blue,Indigo,Violet};
    std::string kind;
public:
    pen(int,std::string,std::string);
    virtual ~pen();
    void show();
    void add(int);
    void _minus(int);
};


#endif // PEN_H_INCLUDED
