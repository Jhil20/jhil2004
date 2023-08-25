#include<iostream>
using namespace std;

struct node
{
    int info;
    struct node *link;
};
struct node *First=NULL;
struct node* push(int x);
struct node* create(int n);
int pop(struct node* First);
//DUMMY NODE(ASSIGN ADD BY MALLOC FUNC)
struct node* create(int a)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->info=a;
    temp->link=NULL;
    return temp;
}

struct node  *push(int n)
{
    struct node* temp1 = create(n);
    if(First==NULL)
    {
        First=temp1;
    }
    else{
        temp1->link=First;
        First=temp1;
    }
    return temp1;
}

int pop()
{
    int x;
    if(First==NULL)
    {
        cout<<"Stack underflow";
        return 0;
    }
    else
    {
        x=First->info;
        First=First->link;
        return x;
    }
}

void display()
{
    struct node* trav=First;
    while(trav!=NULL)
    {
    cout<<"Element in the stack: ";
    cout<<trav->info<<" "<<endl;
    trav=trav->link;
    }



}

main()
{
    cout<<"This program is developed by 22CE101_TISHA PATEL"<<endl;
    int ch,x,n;
    cout<<"1. PUSH"<<endl<<"2. POP"<<endl<<"3. DISPLAY"<<endl;
    do{
    cout<<"Enter choice: ";
    cin>>ch;

    switch(ch)
    {
    case 1:
        cout<<"Enter the element you have to push: ";
        cin>>x;
        First=push(x);
        break;

    case 2:
        n=pop();
        if(n!=0)
        {
        cout<<"Pop element is: "<<n<<endl;
        }
        break;


    case 3:
        display();
        break;

    }

    }
    while(ch!=4);
}
