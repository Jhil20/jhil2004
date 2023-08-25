#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;
struct node *push(int);
struct node *create(int);
struct node *create(int element)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
    temp->link=NULL;
    return temp;
}
struct node *push(int x)
{
    struct node *temp1=create(x);
    if(head==NULL)
    {
        head=temp1;
    }
    else
    {
        temp1->link=head;
        head=temp1;
    }
    return temp1;
}
int pop()
{
    if(head==NULL)
    {
        cout<<"stack underflow";
    }
    else
    {
        int x;
        x=head->data;
        head=head->link;
        return x;
    }
}
void display()
{
    struct node *trav=head;
    while(trav!=NULL)
    {
        cout<<trav->data<<endl;
        trav=trav->link;
    }
}
int main()
{
    int action;
    cout<<"Enter 1 for push"<<endl;
    cout<<"Enter 2 for pop"<<endl;
    cout<<"Enter 3 for display"<<endl;
    cout<<"Enter 4 for exit"<<endl;
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
            int y;
            y=pop();
            cout<<y<<endl;
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        }
    } while(action>=1 && action <=4);
}
