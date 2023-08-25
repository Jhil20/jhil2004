#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue(int val)
{
    struct node *newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    struct node *temp;
    if(front==NULL)
    {
        cout<<"Queue is empty";
    }
    else
    {
        cout<<front->data<<endl;
        temp=front;
        front=front->next;
        if(front==NULL)
        {
            rear=NULL;
        }
        free(temp);
    }
}
void display()
{
    while(front!=NULL)
    {
        cout<<"Display elements";
        cout<<front->data<<endl;
        front=front->next;
    }
}

int main()
{
    int j,x;
    do
    {
        cout<<"Enter 1 for Enqueue"<<endl;
        cout<<"Enter 2 for Dequeue"<<endl;
        cout<<"Enter 3 for Display"<<endl;
        cout<<"Enter 4 for Exit"<<endl;
        cin>>j;
        switch(j)
        {
        case 1:
            cout<<"Queue :";
            cin>>x;
            enqueue(x);
            break;

        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
    }
     while(j>=1 && j<=3);
}
