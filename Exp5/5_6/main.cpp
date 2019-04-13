//6
#include <iostream>

using namespace std;

void _swap(int&,int&);

int main()
{
    int a,b;
    cin>>a>>b;
    _swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}

void _swap(int& a,int& b)
{
    int tmp=a;
    a=b;
    b=tmp;
}
