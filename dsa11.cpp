#include<iostream>
using namespace std;

int f=-1;
int rear=-1;
int q[5];
int l=5;
void enque(int n)
{
    if(rear==l-1)
    {
        cout<<"Queue overflow";
    }
    else
    {
        rear++;
        q[rear]=n;
       // cout<<q[rear]<<" ";
    }

    if(f==-1)
    {
        f=f+1;
    }

}

void dequee()
{
    int y;
    if(f== -1)
    {
        cout<<"Queue underflow";
    }
    else if(f==rear)
    {
        y=q[f];
        cout<<"Deleted element: "<< y<<" "<<endl;
        f=-1;
        rear=-1;
    }
    else
    {

    y=q[f];
    cout<<"Deleted element: "<< y<<" "<<endl;
    f=f+1;

    }
}

void display()
{
    for(int i=f;i<=rear;i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
}
main()
{
    cout<<"This program is prepared by 22CE009 JHIL"<<endl;
    int choice,n;
    do
    {
    cout<<"Enter choice: "<<endl<<"1. FOR INSERT"<<endl<<"2. FOR DELETE"<<endl<<"3. FOR DISPLAY"<<endl;
    cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter element you want to insert: ";
            cin>>n;
            enque(n);
            break;

        case 2:
            dequee();
            //cout<<"The deleted element is: "<<d<<" ";
            break;

        case 3:
            display();
            break;

        }
    }

    while(choice!=0);
}
