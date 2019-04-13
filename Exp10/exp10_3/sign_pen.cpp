#include "sign_pen.h"

sign_pen::sign_pen(int n,double _nib_diameter,std::string _colour)
{
    nib_diameter=_nib_diameter;
    price=10;
    num=n;
    colour=_colour;
    price=1.0;
    used_in_exam=true;
    me_owned_=true;
    service_span=2.0;
    place_of_origin="China";
    apply_to="students&&workmen&&white_collar&&etc";
}

sign_pen::~sign_pen()
{
    std::cout<<"The sign_pen destructor has been called."<<std::endl;
}

void sign_pen::add(int n)
{
    num+=n*n+2;
}

void sign_pen::_minus(int n)
{
    num-=(n*n)/2;
}

void sign_pen::show()
{
    add(109);
    _minus(20);
    std::cout<<"It is a sign_pen object."<<std::endl;
    std::cout<<"Here are "<<num<<" sign pens "<<"."<<std::endl;
    std::cout<<"The colour of the sign pen is "<<colour<<"."<<std::endl;
    std::cout<<"The price of the sign pen is "<<price<<" yuan."<<std::endl;
    std::cout<<"The diameter of the sign pen nib "<<nib_diameter<<" mm."<<std::endl;
    std::cout<<"The sign pen can serve you for "<<service_span<<" years."<<std::endl;
    std::cout<<"The sign pen was made in "<<place_of_origin<<"."<<std::endl;
    std::cout<<"You can use it in examination"<<"."<<std::endl;
    std::cout<<"Some sign pens owned."<<std::endl;
}
