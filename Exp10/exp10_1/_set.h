#ifndef _SET_H_INCLUDED
#define _SET_H_INCLUDED
#include <iostream>
#include <cstdio>
#include <windows.h>

class _set
{
friend _add(_set &,int);
friend _del(_set &,int);
friend bool _judge(_set &,int);
//friend _set &_union(_set &,_set &);//求并集
//friend _set &_intersection(_set &,_set &);
friend _set _union(_set &,_set &);//求并集
friend _set _intersection(_set &,_set &);//求交集
public:
	_set(int);
	_set();
	~_set();
	display(_set &);
private:
	int *p;
	int _size;//size of number
};


#endif // _SET_H_INCLUDED
