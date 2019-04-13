#include "pencil.h"

pencil::pencil(int n,std::string _colour,std::string _XB)
{
    price=10;
    num=n;
    colour=_colour;
    XB=_XB;
    price=1.0;
    used_in_exam=true;
    me_owned_=true;
    service_span=0.3;
    place_of_origin="China";
    apply_to="students&&workmen&&white_collar&&etc";
}

pencil::~pencil()
{
    std::cout<<"The pencil destructor has been called."<<std::endl;
}

void pencil::add(int n)
{
    num+=120*n;
}

void pencil::_minus(int n)
{
    num-=100*(-2*n);
}

void pencil::show()
{
    add(10);
    _minus(20);
    std::cout<<"It is a pencil object."<<std::endl;
    std::cout<<"Here are "<<num<<" pencils "<<"."<<std::endl;
    std::cout<<"The colour of the pencil is "<<colour<<"."<<std::endl;
    std::cout<<"The price of the pencil is "<<price<<" yuan."<<std::endl;
    std::cout<<"The pencil can serve you for "<<service_span<<" years."<<std::endl;
    std::cout<<"The pencil was made in "<<place_of_origin<<"."<<std::endl;
    std::cout<<"You can use it in examination"<<"."<<std::endl;
    std::cout<<"Some pencils owned."<<std::endl;
}
