#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include "Shape.h"
#include <cmath>
//#include <windows.h>

class Triangle:public Shape
{
public:
	Triangle();
	Triangle(double,double,double);
	virtual ~Triangle();
	double area();
	double girth();
	void show();
	bool judge();
private:
	double _side1,_side2,_side3;
};


#endif // TRIANGLE_H_INCLUDED
