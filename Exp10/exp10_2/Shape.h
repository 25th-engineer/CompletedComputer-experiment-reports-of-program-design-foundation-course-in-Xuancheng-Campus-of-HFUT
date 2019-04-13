#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include <iostream>
//#include <windows.h>

class Shape
{
public:
	Shape();
	virtual ~Shape();
	double area(){ return 0;};
	double girth(){ return 0;};
	virtual void show(){ std::cout<<"Shape Object"<<std::endl;};
protected:
    double _girth,_area;
};


#endif // SHAPE_H_INCLUDED
