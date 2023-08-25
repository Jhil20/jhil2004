#include<iostream>
using namespace std;
int stack[100];
int top=-1,size;
int push(int x)
{
    if(top==(size-1))
    {
        cout<<"overflow";
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        cout<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    for(int i=0;i<size;i++)
    {
        cout<<stack[i]<<endl;
    }
}
int main()
{
    cout<<"Enter the size of the stack :";
    cin>>size;
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
            pop();
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
