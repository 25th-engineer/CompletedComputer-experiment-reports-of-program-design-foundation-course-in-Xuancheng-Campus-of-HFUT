#ifndef PENCIL_H_INCLUDED
#define PENCIL_H_INCLUDED
#include "writing_instruments.h"

class pencil:public writing_instruments
{
private:
    std::string colour;
    std::string apply_to;
    std::string XB;
public:
    pencil(int,std::string,std::string);
    virtual ~pencil();
    void show();
    void add(int);
    void _minus(int);
};

#endif // PENCIL_H_INCLUDED
