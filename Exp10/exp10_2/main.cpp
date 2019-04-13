#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

/*
为什么不能在main.cpp或者其他的的头文件中添加 <windows.h>,否则第28到第31行（Rectangle 相关的）会报错？
*/

int main()
{
    Circle c1(1.0);
    c1.show();

    std::cout<<std::endl;
    Triangle t1(1.0,2.0,3.0);
    t1.show();

    std::cout<<std::endl;
    Triangle t2(10.0,3.0,8.0);
    t2.show();
    std::cout<<std::endl;

    std::cout<<std::endl;
    Triangle t3(3.0,4.0,5.0);
    t3.show();
    std::cout<<std::endl;

    Rectangle r1(1.0,2.0),r2(3.0,5.0);
    r1.show();
    std::cout<<std::endl;
    r2.show();
    std::cout<<std::endl;

    //std::cout<<"The screen will be closed in 60s."<<std::endl;
    //Sleep(1000*60);
    return 0;
}
