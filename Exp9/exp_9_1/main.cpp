#include "_cylindrical.h"
#include <cstdio>
#include <windows.h>

int main()
{
    freopen("x1.out","w",stdout);
    for(float i=1.0;i<=3.0;i+=0.1)
    {
        {
            _cylindrical a(i,10);
            a.display();
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    for(float i=3.0;i<=5.0;i+=0.1)
    {
        _circle b(i);
        std::cout<<std::endl;
        b.display();
    }
    std::cout<<"\nThe screen will be closed in 60 seconds.\n";
    Sleep(1000*60);
    return 0;
}
