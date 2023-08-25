#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *lptr;
    struct node *rptr;
};
struct node *Left=NULL;
struct node *Right=NULL;
struct node *create(int element)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
    temp->lptr=NULL;
    temp->rptr=NULL;
    return temp;
}
void InsertLeft(int info)
{
    struct node *temp1=(struct node*)malloc(sizeof(struct node));;
    if(Right==NULL && Left==NULL)
    {
        temp1->data=info;
        temp1->lptr=NULL;
        temp1->rptr=NULL;
        Left=temp1;
        Right=temp1;
    }
    else
    {
        temp1->data=info;
        temp1->rptr=Left;
        temp1->lptr=NULL;
        Left->lptr=temp1;
        Left=temp1;
    }
}
void InsertRight(int info)
{
    struct node *temp1=create(info);
    if(Left==NULL && Right==NULL)
    {
        temp1->data=info;
        temp1->lptr=NULL;
        temp1->rptr=NULL;
        Right=temp1;
    }
    else
    {
        temp1->data=info;
        temp1->rptr=NULL;
        temp1->lptr=Right;
        Right->rptr=temp1;
        Right=temp1;
    }
}
void DeleteLeft()
{
    struct node *trav=Left;
    if(Left==Right)
    {
        Left=Right=NULL;
        int x=trav->data;
        cout<<x<<endl;
    }
    else
    {
        int x=Left->data;

        Left=Left->rptr;
         Left->lptr=NULL;
        cout<<x<<endl;
    }
}
void DeleteRight()
{
    struct node *trav=Right;
    if(Left==Right)
    {
        Left=Right=NULL;
        int x=trav->data;
        cout<<x<<endl;
    }
    else
    {
        int x=Right->data;
        Right=Right->lptr;
        Right->rptr=NULL;
        cout<<x<<endl;
    }
}
void display()
{
    struct node *temp=Left;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->rptr;
    }
    free(temp);

}
int main()
{
    int action;
    cout<<"Enter 1 to Insert from Left"<<endl;
    cout<<"Enter 2 to Insert from Right"<<endl;
    cout<<"Enter 3 to Delete from left"<<endl;
    cout<<"Enter 4 to Delete from Right"<<endl;
    cout<<"Enter 5 to Display"<<endl;
    cout<<"Enter 6 to exit"<<endl;
    do
    {
        cout<<"Enter action : ";
        cin>>action;
        switch(action)
        {
        case 1:
            int y;
            cout<<"Enter element to insert : ";
            cin>>y;
            InsertLeft(y);
            break;
        case 2:
            int x;
            cout<<"Enter element to insert : ";
            cin>>x;
            InsertRight(x);
            break;
        case 3:
            DeleteLeft();
            break;
        case 4:
            DeleteRight();
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
        }
}while(action>=1 && action<=6);
}
