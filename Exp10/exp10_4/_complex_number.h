#ifndef _COMPLEX_NUMBER_H_INCLUDED
#define _COMPLEX_NUMBER_H_INCLUDED
#include <iostream>
#include <cmath>
#include <windows.h>

class _complex_number
{
private:
    double re;
    double im;
public:
    _complex_number();
    _complex_number(double,double);
    ~_complex_number();
    void display(_complex_number &);
    _complex_number operator+(_complex_number &)const;
    _complex_number operator-(_complex_number &)const;
    //_complex_number operator=(_complex_number &);//为什么这里用引用做参数就不行呢？
    _complex_number operator=(_complex_number );
};


#endif // _COMPLEX_NUMBER_H_INCLUDED
