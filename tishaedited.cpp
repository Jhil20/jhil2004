#include<iostream>
using namespace std;


struct node
{
        int info;
        struct node* link;
};

struct node* first=NULL;

struct node* create(int a)
{
    struct node* temp1;
    temp1=(struct node*)malloc(sizeof(struct node));
    temp1->info=a;
    temp1->link=NULL;
    return temp1;


}

struct node* inserttAtFirst(int x)
{
    struct node* temp=create(x);
    if(first==NULL)
    {
        first=temp;
    }
    else
    {
    temp->link=first;
    first=temp;
    }
    return temp;
}


int deleteeAtLast()
{
    if(first->link==NULL)
    {
        free(first);
    }
    else
    {
    struct node* pre;
    struct node* trav;
    trav=first;
    while(trav->link != NULL)
    {
        pre=trav;
        trav=trav->link;
    }

    pre->link=NULL;
    int x = trav->info;
    free(trav);
    return x;
    }
}



void deleteeall()
{
    struct node* trav;
    while(first !=NULL)
    {
        trav=first;
        first=first->link;
        free(trav);
    }
    cout<<"All the nodes are deleted"<<endl;

}





void display()
{

    struct node* t=first;
    while(t != NULL)
    {
        cout<<t->info<<endl;
        t=t->link;
    }



}
main()
{
    cout<<"This program is prepared by 22CE009 JHIL"<<endl;
     int ch,x,n,i;
    cout<<"1. INSERT AT FIRST"<<endl<<"2. DELETE AT LAST"<<endl<<"3. DISPLAY"<<endl<<"4. DELETE ALL"<<endl;
    do{
    cout<<"Enter choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        cout<<"Enter the element you have to insert: ";
        cin>>x;
        first=inserttAtFirst(x);
        break;

    case 2:
        n=deleteeAtLast();
        cout<<"The deleted info of the node: "<<n<<endl;
        break;


    case 3:
        display();
        break;


    case 4:
        deleteeall();
        break;


    }

    }
    while(ch!=0);
}
