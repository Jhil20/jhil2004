#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
struct node *head=NULL;

void InsertFront(int item)
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
void InsertLast(int item)
{
    struct node * nn=(struct node *)malloc(sizeof(struct node));
    nn->data=item;
    nn->link=NULL;
    if(head->link==NULL)
    {
      head->link=nn;
    }
    else
    {
        struct node * temp;
        temp = head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=nn;
    }
}
int DeleteFront()
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
int DeleteLast()
{
    int item;
    struct node *temp,*previous;
    temp=head;
    if(temp->link==NULL)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
    while(temp->link!=NULL)
    {
        previous=temp;
        temp=temp->link;
    }
    }
   item = temp->data;
   previous->link=NULL;
   return item;
}
void Deleteall()
{
    struct node *temp,*previous;
    int x;
    if(head==NULL)
        cout<<"LL is empty";
    else
    {
    while(head!=NULL)
    {

        x=DeleteFront();
        cout<<"deleted node is "<<x<<endl;
    }
    cout<<"LL is empty now"<<endl;
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        cout<<"LL i empty\n";
    }
    else
    {
        cout<<"printing stack elements"<<endl;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        }
    }
}
void reverselinkedlist()
{
    struct node*previousnode,*currentnode,*nextnode;
    previousnode = NULL;
    currentnode = head;
    nextnode = head;
    while(nextnode!=NULL)
    {
        nextnode = nextnode->link;
        currentnode->link = previousnode;
        previousnode = currentnode;
        currentnode = nextnode;
    }
    head = previousnode;
}
void Middleelement()
{
    int cnt=0;
    struct node *temp = head;
    while(temp=0)
    {
        cnt++;
        temp = temp->link;
    }
    cout<<cnt<<endl;
}
void middle_element()
{
    int cnt=0;
    struct node* temp =head;
    struct node *middle=head;
    while(temp!=NULL)
    {
        cnt++;
        temp-temp->link;
    }
    cnt = cnt/2 + 1;
    for(int i=0;i<cnt-1;i++)
    {
        middle=middle->link;
    }
    cout<<middle->data;
}
int main()
{
    int x,j;
    do
    {
    cout<<"Enter 1 for InsertFront"<<endl;
    cout<<"Enter 2 for InsertLast"<<endl;
    cout<<"Enter 3 for DeleteFront"<<endl;
    cout<<"Enter 4 for DeleteLast"<<endl;
    cout<<"Enter 5 for DeleteAll"<<endl;
    cout<<"Enter 6 for Display"<<endl;
    cout<<"Enter 7 for reversing the linkedlist"<<endl;
    cout<<"Enter 8 for middle element"<<endl;
    cout<<"Enter 9 to exit"<<endl;
        cin>>j;
        switch(j)
        {
        case 1:
            cin>>x;
            InsertFront(x);
            break;
        case 2:
            cin>>x;
            InsertLast(x);
            break;
        case 3:
            x=DeleteFront();
            cout<<x<<endl;
            break;
        case 4:
           x= DeleteLast();
           cout<<x<<endl;
            break;
        case 5:
            Deleteall();
            break;
        case 6:
            display();
            break;
        case 7:
            reverselinkedlist();
            break;
        case 8:
            middle_element();
            break;
        case 9:
            return 0;
        }
    }
     while(j>=1 && j<=9);
}

