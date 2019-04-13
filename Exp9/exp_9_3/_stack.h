#ifndef _STACK_H_INCLUDED
#define _STACK_H_INCLUDED
#include <iostream>

typedef int DataType;

class _stack
{
public:
    _stack(int);
    set_obj_num();
    ~_stack();
    bool _is_empty()const;
    bool _is_full()const;
    bool push(DataType data);
    bool pop(DataType data);
    void _top();
    static DataType get_obj_num();
    //DataType get_obj_num();
private:
    //enum{maxn=10};
    DataType *data;
    DataType num;
    DataType _size;
    static DataType obj_num;
    //DataType obj_num;
};

#endif // _STACK_H_INCLUDED
