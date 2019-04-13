#include "_cylindrical.h"

_cylindrical::_cylindrical(double r,double _height):circle(r)
{
	h=_height;
	_volume=_cylindrical::volume();
}

_cylindrical::~_cylindrical()
{
	std::cout<<"The cylindrical destructor has been called."<<std::endl;
}

double _cylindrical::volume()
{
	return circle.area()*h;
}

void _cylindrical::display()
{
    std::cout<<_volume<<std::endl;
}
