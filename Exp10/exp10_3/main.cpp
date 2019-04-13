#include "pen.h"
#include "pencil.h"
#include "sign_pen.h"
#include "writing_brushes.h"

int main()
{
    pen p1(10,"Black","Steel");
    p1.show();
    std::cout<<std::endl;

    pencil pc1(100,"Red","2B");
    pc1.show();
    std::cout<<std::endl;

    sign_pen sgp1(20,0.5,"Purple");
    sgp1.show();
    std::cout<<std::endl;

    writing_brushes wb1(25,"Black","hard","drawing");
    wb1.show();
    std::cout<<std::endl;

    std::cout<<"The screen will be closed in 60s."<<std::endl;
    Sleep(1000*60);
    return 0;
}
