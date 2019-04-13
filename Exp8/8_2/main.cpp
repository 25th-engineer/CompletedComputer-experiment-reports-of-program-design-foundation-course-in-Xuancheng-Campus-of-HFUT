#include <iostream>
//#include <cstdlib>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *cr(int);
void display(node *);

int main()
{
    //srand(time(NULL));
    int n;
    //for()
    cin>>n;
    node *p=cr(n);
    display(p);
    return 0;
}

node *cr(int n)
{
    node *tmp=NULL,*head=NULL;
    int num;
    cin>>num;
    head=new node;

    head->data=num;
    head->next=NULL;

    for(int i=0;i<n-1;i++)
    {
        cin>>num;
        tmp=new node;

        tmp->data=num;
        tmp->next=head;
        head=tmp;
    }
    return head;
}

void display(node *s)
{
    node *tmp=s->next;
    while(tmp)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}
