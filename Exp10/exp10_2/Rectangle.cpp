#include "Rectangle.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double _a,double _b)
{
    length=_a;
    width=_b;
}

Rectangle::~Rectangle()
{
    std::cout<<"The rectangle destruction has been called."<<std::endl;
}

void Rectangle::show()
{
    _girth=girth();
    _area=area();
    std::cout<<"It is a rectangle object."<<std::endl;
    std::cout<<"The length and width of the rectangle are "<<length<<" "<<width<<std::endl;
    std::cout<<"The area of the rectangle is "<<_area<<std::endl;
    std::cout<<"The girth of the rectangle is "<<_girth<<std::endl;
}

double Rectangle::area()
{
    return length*width;
}

double Rectangle::girth()
{
    return 2*(length+width);
}
