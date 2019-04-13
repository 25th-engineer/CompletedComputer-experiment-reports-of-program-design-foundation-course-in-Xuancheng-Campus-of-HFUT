// Triangle.cpp: implementation of the Triangle class.
//
//////////////////////////////////////////////////////////////////////

#include "Triangle.h"
#include <math.h>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Triangle::Triangle()
{

}

Triangle::Triangle(double _a,double _b,double _c)
{
	_side1=_a;
	_side2=_b;
	_side3=_c;
}

Triangle::~Triangle()
{
	std::cout<<"The triangle destruction has been called."<<std::endl;
}

double Triangle::area()
{
    if(judge())
    {
        double s=0.0,l=(_side1+_side2+_side3)/2;
        s=sqrt(l*(l-_side1)*(l-_side2)*(l-_side3));
        return s;
    }
    return 0.0;
}

double Triangle::girth()
{
    if(judge())
        return _side1+_side2+_side3;
    return 0.0;
}

void Triangle::show()
{
    if(judge())
    {
        _area=area();
        _girth=girth();
        std::cout<<"It is a triangle object."<<std::endl;
        std::cout<<"The three sides of the triangle are "<<_side1<<" "<<_side2<<" "<<_side3<<" "<<std::endl;
        std::cout<<"The area of the triangle is "<<_area<<std::endl;
        std::cout<<"The girth of triangle is "<<_girth<<std::endl;
    }
    else
        std::cout<<"It is not a lawful triangle."<<std::endl;
}

bool Triangle::judge()
{
    //abc acb bac bca cab cba
    if(_side1+_side2>_side3 && _side1+_side3>_side2 && _side2+_side1>_side3 && _side2+_side3>_side1 && _side3+_side1>_side2 &&_side3+_side2>_side1)
        return true;
    return false;
}
