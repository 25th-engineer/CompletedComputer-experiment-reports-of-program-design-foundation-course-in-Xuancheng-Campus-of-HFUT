#ifndef WRITING_BRUSHES_H_INCLUDED
#define WRITING_BRUSHES_H_INCLUDED
#include "writing_instruments.h"
#include <cmath>

class writing_brushes:public writing_instruments
{
private:
    std::string property;
    std::string person_apply_to;
    std::string apply_to_what;
    std::string colour;
public:
    writing_brushes(int,std::string,std::string,std::string);
    virtual ~writing_brushes();
    void show();
    void add(int);
    void _minus(int);
};

#endif // WRITING_BRUSHES_H_INCLUDED
