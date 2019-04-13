#include "_stack.h"

_stack::_stack(int s)
{
    //set_obj_num();
    _size=s;
    data=new DataType[_size];
    num=0;
    //std::cout<<(data+1)<<std::endl;
    obj_num++;
}

/*_stack::set_obj_num()
{
    obj_num=0;
}*/

bool _stack::_is_empty()const
{
    return num==0;
}

bool _stack::_is_full()const
{
    return num==_size;
}

bool _stack::push(DataType _data)
{
    if(!_is_full())
    {
        data[num++]=_data;
        return true;
    }
    else
        return false;
}

bool _stack::pop(DataType _data)
{
    if(!_is_empty())
    {
        _data=data[--num];
        return true;
    }
    return false;
}

void _stack::_top()
{
    for(int i=0;i<_size;i++)
        std::cout<<data[i]<<" ";
}

_stack::~_stack()
{
    delete []data;
    std::cout<<std::endl<<"The destructor has been called."<<std::endl;
    //std::cout<<(data+1)<<std::endl;
    obj_num--;
}

DataType _stack::get_obj_num()
{
    return obj_num;
    //;
}
