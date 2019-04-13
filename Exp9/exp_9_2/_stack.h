#ifndef _STACK_H_INCLUDED
#define _STACK_H_INCLUDED
#include <iostream>

typedef int DataType;

class _stack
{
public:
    _stack();
    ~_stack();
    bool _is_empty()const;
    bool _is_full()const;
    bool push(const DataType& data);
    bool pop(DataType& data);
    void _top();
private:
    enum{maxn=10};
    DataType num[maxn];
    DataType top;
};

#endif // _STACK_H_INCLUDED
