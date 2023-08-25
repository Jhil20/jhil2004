#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *first=NULL;
struct node *create(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    return temp;
};
struct node *push(int info)
{
    struct node *temp1=create(info);
    if(first==NULL)
    {
        first=temp1;
    }
    else
    {
        temp1->link=first;
        first=temp1;
    }
    return temp1;
}
void pop()
{
    if(first==NULL)
    {
        cout<<"memory error"<<endl;
    }
    int x;
    x=first->data;
    first=first->link;
    cout<<"poped elements : "<<x<<endl;
}
void display()
{
    struct node *trav;
    trav=first;
    while(trav!=NULL)
    {
        cout<<trav->data<<endl;
        trav=trav->link;
    }
}
void DeleteLast()
{
    int x;
    struct node *t1=first;
    struct node *t2=first;
    while(t1->link!=NULL)
    {
        t2=t1;
        t1=t1->link;
        //t2=t2->link;
    }
        x=t1->data;
        free(t1);
        t2->link=NULL;
    cout<<x<<endl;
}
int main()
{
    int action;
    cout<<"Enter 1 for push"<<endl;
    cout<<"Enter 2 for pop"<<endl;
    cout<<"Enter 3 to delete last node"<<endl;
    cout<<"Enter 4 for display"<<endl;
    cout<<"Enter 5 for exit"<<endl;
    do
    {
        cout<<"Enter action :";
        cin>>action;
        switch(action)
        {
        case 1:
            int x;
            cin>>x;
            push(x);
            break;
        case 2:
            pop();
            break;
        case 4:
            display();
            break;
        case 3:
            DeleteLast();
            break;
        case 5:
            return 0;
            break;
        }
    } while(action>=1 && action <=4);
}
