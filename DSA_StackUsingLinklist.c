#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
}
struct node *head=NULL;
void push(int item)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==null)
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
