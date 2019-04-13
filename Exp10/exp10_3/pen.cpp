#include "pen.h"

pen::pen(int n,std::string _colour,std::string _nib)
{
    price=10;
    nib=_nib;
    num=n;
    colour=_colour;
    price=100.0;
    used_in_exam=true;
    me_owned_=true;
    service_span=10.0;
    place_of_origin="China";
}

pen::~pen()
{
    std::cout<<"The pen destructor has been called."<<std::endl;
}

void pen::add(int n)
{
    num+=10*n;
}

void pen::_minus(int n)
{
    num-=100*(-n);
}

void pen::show()
{
    add(10);
    _minus(20);
    std::cout<<"It is a pen object."<<std::endl;
    std::cout<<"Here are "<<num<<" pen "<<"."<<std::endl;
    std::cout<<"The nib of the pen is "<<nib<<"."<<std::endl;
    std::cout<<"The colour of the pen is "<<colour<<"."<<std::endl;
    std::cout<<"The kind of the pen is "<<kind<<"."<<std::endl;
    std::cout<<"The price of the pen is "<<price<<"."<<std::endl;
    std::cout<<"The pen can serve you for "<<service_span<<" years."<<std::endl;
    std::cout<<"The pen was made in "<<place_of_origin<<"."<<std::endl;
    std::cout<<"You can use it in examination"<<"."<<std::endl;
    std::cout<<"Some pens owned."<<std::endl;
}
