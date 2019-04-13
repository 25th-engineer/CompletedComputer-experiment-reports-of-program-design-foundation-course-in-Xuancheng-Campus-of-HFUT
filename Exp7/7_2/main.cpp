//2
#include <iostream>
#include <cstring>

using namespace std;

int * init(int *,int);
double ave(int *,int);
void _free(int *);

int main()
{
    int n;
    cin>>n;
    int *arr;
    arr=init(arr,n);
    double aver=ave(arr,n);
    cout<<aver<<endl;
    _free(arr);
    return 0;
}

int * init(int *a,int n)
{
    a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    return a;
}

double ave(int *s,int n)
{
    int sum=0;
    for(int i=0;s[i]!='\0';i++)
        sum+=s[i];
    return sum/n;
}

void _free(int *s)
{
    delete []s;
}
