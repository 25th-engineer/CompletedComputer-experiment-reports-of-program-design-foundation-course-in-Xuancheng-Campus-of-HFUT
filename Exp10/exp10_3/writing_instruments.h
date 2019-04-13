#ifndef WRITING_INSTRUMENTS_H_INCLUDED
#define WRITING_INSTRUMENTS_H_INCLUDED
#include <iostream>
#include <string>
#include <windows.h>

class writing_instruments
{
protected:
    double price;
    bool used_in_exam;
    bool me_owned_;
    double service_span;
    std::string place_of_origin;
    int num;
public:
    writing_instruments();
    writing_instruments(int);
    virtual ~writing_instruments();
    virtual void show(){std::cout<<"..."<<std::endl;}
    virtual void add(int);
    virtual void _minus(int);
};


#endif // WRITING_INSTRUMENTS_H_INCLUDED
