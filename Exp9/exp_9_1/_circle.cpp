// _circle.cpp: implementation of the _circle class.
//
//////////////////////////////////////////////////////////////////////

#include "_circle.h"
#include <iostream>
#define _pi 3.1415926

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

_circle::_circle(double R)
{
	r=R;
	s=_circle::area();
}

_circle::~_circle()
{
	std::cout<<"The circle destructor has been called."<<std::endl;
}

double _circle::area()
{
	return _pi*r*r;
}

void _circle::display()
{
	std::cout<<"The radius of the circle = "<<r<<std::endl<<"The area of the circle = "<<s<<std::endl;
}
