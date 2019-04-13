//3 version1:
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    freopen("x1.in","r",stdin);
    freopen("x1.out","w",stdout);
    char s[8][50],arr[8][50];
    for(int i=0;i<8;i++)
        //scanf("%s",s[i]);
        cin>>s[i];
    for(int i=0;i<8;i++)
    {
        cout<<s[i];
        cout<<endl;
    }
    for(int i=0;i<8;i++)
    {
        for(int j=i;j<8;j++)
        {
            if(strcmp(s[i],s[j])==1)
            {
                strcpy(arr[i],s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],arr[i]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<s[i];
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        for(int j=i;j<8;j++)
        {
            if(strcmp(s[i],s[j])==-1)
            {
                strcpy(arr[i],s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],arr[i]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<s[i];
        cout<<endl;
    }
    return 0;
}
