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
ע�⣬���������ʾ���У���������Ķ����ǵ��ö���������ұߵĶ�������Ϊ���������ݵĶ���
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

_complex_number _complex_number::operator=(_complex_number c1)//��ʱ��Ҫ�����Ը�ֵ���������
{
    //_complex_number c2;
    re=c1.re;
    im=c1.im;
    return *this;
}

void _complex_number::display(_complex_number &c)
{
    if(c.im>0)//Ϊʲô����д��  if(c.im>0) �����Ԥ�ڲ�����
        std::cout<<c.re<<" + "<<c.im<<"i"<<std::endl;
    else
        std::cout<<c.re<<" - "<<std::abs(c.im)<<"i"<<std::endl;
}
