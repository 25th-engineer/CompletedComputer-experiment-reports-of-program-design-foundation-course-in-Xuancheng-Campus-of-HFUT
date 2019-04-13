#include "writing_brushes.h"

writing_brushes::writing_brushes(int n,std::string _colour,std::string _property,std::string _apply_to_what)
{
    price=10;
    property=_property;
    num=n;
    colour=_colour;
    price=255.0;
    used_in_exam=false;
    me_owned_=false;
    service_span=2.0;
    place_of_origin="China";
    person_apply_to="students&&workmen&&white_collar&&etc";
    apply_to_what=_apply_to_what;
}

writing_brushes::~writing_brushes()
{
    std::cout<<"The writing_brushes destructor has been called."<<std::endl;
}

void writing_brushes::add(int n)
{
    num+=sqrt(n)*20-1;
}

void writing_brushes::_minus(int n)
{
    num-=n*sqrt(n)+2;
}

void writing_brushes::show()
{
    add(109);
    _minus(19);
    std::cout<<"It is a writing_brushes object."<<std::endl;
    std::cout<<"Here are "<<num<<" writing brushes "<<"."<<std::endl;
    std::cout<<"The colour of the writing brush is "<<colour<<"."<<std::endl;
    std::cout<<"The price of the writing brush is "<<price<<" yuan."<<std::endl;
    std::cout<<"This kind of brush is suitable for "<<apply_to_what<<"."<<std::endl;
    std::cout<<"This property of writing brush is "<<property<<"."<<std::endl;
    std::cout<<"The writing brush can serve you for "<<service_span<<" years."<<std::endl;
    std::cout<<"The writing brush was made in "<<place_of_origin<<"."<<std::endl;
    std::cout<<"Generally You can't use it in examination"<<"."<<std::endl;
    std::cout<<"No writing brush owned."<<std::endl;
}
