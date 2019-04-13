#include "_complex_number.h"

int main()
{
    _complex_number c1(1.0,2.0),c2(3.0,5.0),c3,c4;
    c1.display(c1);
    c2.display(c2);

    c3=c1-c2;
    c4=c1+c2;
    c3.display(c3);
    c4.display(c4);

    std::cout<<"The screen will be closed in 60s."<<std::endl;
    Sleep(1000*60);
    return 0;
}
