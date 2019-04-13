// _circle.h: interface for the _circle class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX__CIRCLE_H__F43D814D_EC95_4C34_9227_24B6BA7742F3__INCLUDED_)
#define AFX__CIRCLE_H__F43D814D_EC95_4C34_9227_24B6BA7742F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class _circle
{
public:
	_circle(double);
	~_circle();
	double area();
	void display();
private:
	double r,s;
};

#endif // !defined(AFX__CIRCLE_H__F43D814D_EC95_4C34_9227_24B6BA7742F3__INCLUDED_)
