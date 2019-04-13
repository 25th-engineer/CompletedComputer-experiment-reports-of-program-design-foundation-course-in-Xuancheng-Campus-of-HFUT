#include "_stack.h"

int main()
{
    _stack st_1(2);
    std::cout<<st_1.get_obj_num()<<std::endl;
    _stack st_2(3);
    std::cout<<st_2.get_obj_num()<<std::endl;
    return 0;
}
