#include "writing_instruments.h"

writing_instruments::writing_instruments()
{
    price=0.0;
    used_in_exam=false;
    me_owned_=false;
    service_span=0.0;
    place_of_origin="xxxxxxxxxxxxxxxxx";
    num=0;
}

writing_instruments::~writing_instruments()
{
    std::cout<<"The writing_instruments destructor has been called."<<std::endl;
}

writing_instruments::writing_instruments(int n)
{
    price=0.0;
    used_in_exam=false;
    me_owned_=false;
    service_span=0.0;
    place_of_origin="xxxxxxxxxxxxxxxxx";
    num=n;
}

void writing_instruments::add(int n)
{
    num+=n;
}

void writing_instruments::_minus(int n)
{
    num-=n;
}
