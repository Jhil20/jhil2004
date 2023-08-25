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

struct node* inserttAtLast(int i)
{
        struct node* t2=create(i);
        struct node*trav=first;
        while(trav->link != NULL)
        {
            trav=trav->link;
        }
        trav->link=t2;

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

struct node* deleteeAtFirst()
{
    struct node* temp=first;
    first=first->link;
    //int x=first->info;
    free(temp);


}

void addnode(int a,int infoo)
{
    struct node* trav;
    struct node* pre;
    struct node* temp1=create(a);
    temp1->info=a;
    trav=first;
    while(trav->info != infoo)
    {
        pre=trav;
        trav=trav->link;
    }
    temp1->link=trav;
    pre->link=temp1;
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
    cout<<"1. INSERT AT FIRST"<<endl<<"2. DELETE AT LAST"<<endl<<"3. DISPLAY"<<endl<<"4. INSERT AT LAST"<<endl
    <<"5. DELETE AT FIRST"<<endl<<"6. DELETE ALL"<<endl<<"7. ADD NODE IN BETWEEN"<<endl<<"8. REVERSE LINKED LIST"<<endl;
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
        cout<<"Enter the element you have to insert at Last";
        cin>>i;
        inserttAtLast(i);
        break;
    case 5:
         deleteeAtFirst();
        //cout<<"The deleted info of the node: "<<n<<endl;
        break;

    case 6:
        deleteeall();
        break;

    case 7:
        int a,b;
        cout<<"Enter element you want to insert:";
        cin>>a;
        cout<<"Add node in front of which info of the node:";
        cin>>b;
        addnode(a,b);

    }

    }
    while(ch!=0);
}
