#ifndef _CYLINDRICAL_H_INCLUDED
#define _CYLINDRICAL_H_INCLUDED
#include "_circle.h"
#include "iostream"

class _cylindrical
{
public:
	_cylindrical(double r=0.0,double _height=0.0);
	~_cylindrical();;
	double volume();
	void display();
private:
	_circle circle;
	double h,_volume;
};


#endif // _CYLINDRICAL_H_INCLUDED

