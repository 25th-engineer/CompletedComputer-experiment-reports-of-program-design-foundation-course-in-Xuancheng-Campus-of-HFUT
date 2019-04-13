#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
//#include <windows.h>
#include "Shape.h"

class Rectangle:public Shape
{
public:
	Rectangle();
	Rectangle(double,double);
	~Rectangle();
	double area();
	double girth();
	void show();
private:
	double length,width;
};

#endif // RECTANGLE_H_INCLUDED
