#include "_stack.h"

_stack::_stack()
{
    top=0;
}

bool _stack::_is_empty()const
{
    return top==0;
}

bool _stack::_is_full()const
{
    return top==maxn;
}

bool _stack::push(const DataType& data)
{
    if(top<maxn)
    {
        num[top++]=data;
        return true;
    }
    else
        return false;
}

bool _stack::pop(DataType& data)
{
    if(top>0)
    {
        data=num[--top];
        return true;
    }
    return false;
}

void _stack::_top()
{
    for(int i=0;i<10;i++)
        std::cout<<num[i]<<" ";
}

_stack::~_stack()
{
    delete []num;
    std::cout<<std::endl<<"The destructor has been called."<<std::endl;
    //std::cout<<num<<std::endl;
}
