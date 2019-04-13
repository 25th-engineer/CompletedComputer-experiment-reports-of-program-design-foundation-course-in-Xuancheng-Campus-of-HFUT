// ircle.cpp: implementation of the Circle class.
//
//////////////////////////////////////////////////////////////////////

#include "Circle.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Circle::Circle()
{

}

Circle::Circle(double R)
{
	r=R;
}

Circle::~Circle()
{
	std::cout<<"The circle destruction has been called."<<std::endl;
}

double Circle::area()
{
    //_area=pi*r*r;
	return pi*r*r;
}

void Circle::show()
{
    _area=area();
    _girth=girth();
	std::cout<<"It is a circle object."<<std::endl;
	std::cout<<"The radius of the circle is "<<r<<std::endl;
	std::cout<<"The area of the circle is "<<_area<<std::endl;
	std::cout<<"The girth of circle is "<<_girth<<std::endl;
}

double Circle::girth()
{
    //_girth=2*pi*r;
	return 2*pi*r;
}
