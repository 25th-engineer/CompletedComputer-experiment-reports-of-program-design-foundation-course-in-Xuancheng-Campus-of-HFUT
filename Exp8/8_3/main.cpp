#include <iostream>

using namespace std;



enum Moth
{
        January,February,March,April,May,June,July,August,September,October,Novermber,December
};

void leap(int);

int main()
{
    leap(2000);
    cout<<endl;
    leap(1998);
    cout<<endl;
    leap(2010);
    cout<<endl;
    leap(2018);
    return 0;
}

void leap(int y)
{
    if((y%400==0)||((y%4==0)&&(y%100!=0)))
    {

            cout<<January+1<<" = 31"<<endl;
            cout<<February+1<<" = 29"<<endl;
            cout<<March+1<<" = 31"<<endl;
            cout<<April+1<<" = 30"<<endl;
            cout<<May+1<<" = 31"<<endl;
            cout<<June+1<<" = 30"<<endl;
            cout<<July+1<<" = 31"<<endl;
            cout<<August+1<<" = 31"<<endl;
            cout<<September+1<<" = 30"<<endl;
            cout<<October+1<<" =31"<<endl;
            cout<<Novermber+1<<" =30"<<endl;
            cout<<December+1<<" = 31"<<endl;

    }
    else
    {
        cout<<January+1<<" = 31"<<endl;
        cout<<February+1<<" = 28"<<endl;
        cout<<March+1<<" = 31"<<endl;
        cout<<April+1<<" = 30"<<endl;
        cout<<May+1<<" = 31"<<endl;
        cout<<June+1<<" = 30"<<endl;
        cout<<July+1<<" = 31"<<endl;
        cout<<August+1<<" = 31"<<endl;
        cout<<September+1<<" = 30"<<endl;
        cout<<October+1<<" =31"<<endl;
        cout<<Novermber+1<<" =30"<<endl;
        cout<<December+1<<" = 31"<<endl;
    }
}
