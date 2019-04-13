#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include "Shape.h"
#define pi 3.1415926

class Circle:public Shape
{
public:
	Circle();
	Circle(double);
	virtual ~Circle();
	double area();
	double girth();
	void show();
private:
	double r;
};


#endif // CIRCLE_H_INCLUDED
