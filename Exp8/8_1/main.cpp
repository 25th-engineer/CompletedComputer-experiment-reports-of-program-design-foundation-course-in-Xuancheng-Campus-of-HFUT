#include <iostream>
#include <cstdio>

//姓名、年龄、性别、成绩
typedef struct student
{
    char name[50];
    int y;
    char sex[10];
    int grade;
}s;

using namespace std;

s *input(s *,int);
s *display(s*,int);

int main()
{
    freopen("x1.in","r",stdin);
    freopen("x1.out","w",stdout);
    int n;
    s *stu;
    cin>>n;
    stu=input(stu,n);
    display(stu,n);
    return 0;
}

s *input(s* st,int n)
{
    st=new s[n];
    for(int i=0;i<n;i++)
    {
        cin>>st[i].name>>st[i].y>>st[i].sex>>st[i].grade;
    }
    return st;
}

s *display(s* st,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<st[i].name<<" "<<st[i].y<<" "<<st[i].sex<<" "<<st[i].grade<<endl;
    }
    delete st;
}
