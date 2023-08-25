#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;
void push(int item)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        cout<<"Memory error";
    }
    if (head==NULL)
    {
        p->data=item;
        p->link=NULL;
        head=p;
    }
    else
    {
        p->data=item;
        p->link=head;
        head=p;
    }
}
int pop()
{
    int item;
    struct node *p;
    if(head==NULL)
    {
        cout<<("underflow");
        return -1;
    }
    item=head->data;
    p=head;
    head=head->link;
    free(p);
    return item;
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        cout<<"Stack i empty\n";
    }
    else
    {
        cout<<"printing stack elements";
        while(ptr!=NULL)
        {
            cout<<"\n"<<ptr->data;
            ptr=ptr->link;
        }
    }
}
int main()
{
    cout<<"This program is prepared by JHIL 22CE009\n"<<endl;
    int n,x,j;
    cout<<"Enter the size of an link-list :";
    cin>>n;
do
    {
        cout<<"Enter 1 for push"<<endl;
        cout<<"Enter 2 for pop"<<endl;
        cout<<"Enter 3 for display"<<endl;
        cout<<"Enter 4 for exit"<<endl;
        cin>>j;
        switch(j)
        {
        case 1:
            cin>>x;
            push(x);
            break;

        case 2:
            x=pop();
            cout<<x;
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
    }
     while(j>=1 && j<=4);
}
