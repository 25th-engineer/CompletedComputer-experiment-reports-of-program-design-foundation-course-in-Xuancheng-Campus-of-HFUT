//5
#include <iostream>
//#include <windows.h>  //In the Windows environment
#include <unistd.h>     //In the Linux environment

using namespace std;

void sum_square(int,int);
void sum_square(double,double);

int main()
{
    int a,b;
    double x,y;
    //cout<<"Please enter two integers:"<<endl;
    cin>>a>>b;
    //cout<<"Please enter two floating point numbers:"<<endl;
    cin>>x>>y;
    sum_square(a,b);
    sum_square(x,y);
    //Sleep(1000*30);   //In the Windows environment
    sleep(30);          //In the Linux environment
    return 0;
}

void sum_square(int a,int b)
{
    //cout<<"The quadratic sum of these two integers:"<<a*a+b*b<<endl;
    cout<<a*a+b*b<<endl;
}

void sum_square(double a,double b)
{
    cout<<a*a+b*b<<endl;
    cout<<endl<<"The screen will be closed in 30s.";
}
