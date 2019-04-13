#include "_complex_number.h"

_complex_number::_complex_number()
{

}

_complex_number::_complex_number(double _re,double _im)
{
    re=_re;
    im=_im;
}

_complex_number::~_complex_number()
{
    std::cout<<"The destructor has been called."<<std::endl;
}

/*
注意，在运算符表示法中，运算符左侧的对象是调用对象，运算符右边的对象是作为参数被传递的对象。
*/

_complex_number _complex_number::operator+(_complex_number &c1)const
{
    _complex_number c2;
    c2.re=re+c1.re;
    c2.im=im+c1.im;
    return c2;
}

_complex_number _complex_number::operator-(_complex_number &c1)const
{
    _complex_number c2;
    c2.re=re-c1.re;
    c2.im=im-c1.im;
    return c2;
}

_complex_number _complex_number::operator=(_complex_number c1)//有时需要考虑自赋值的特殊情况
{
    //_complex_number c2;
    re=c1.re;
    im=c1.im;
    return *this;
}

void _complex_number::display(_complex_number &c)
{
    if(c.im>0)//为什么这里写成  if(c.im>0) 输出与预期不符？
        std::cout<<c.re<<" + "<<c.im<<"i"<<std::endl;
    else
        std::cout<<c.re<<" - "<<std::abs(c.im)<<"i"<<std::endl;
}
