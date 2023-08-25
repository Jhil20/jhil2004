#include<iostream>
int top=-1;
int arr[100];
using namespace std;
int push(int x,int n)
{
    if(top==(n-1))
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        top++;
        arr[top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        int x=arr[top];
        top--;
        return x;
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i];
    }
}
int main()
{
    cout<<"This program is prepared by JHIL 22CE009\n"<<endl;
    int n,x,j;
    cout<<"Enter the size of an array :";
    cin>>n;
do
    {
        cout<<"Enter 1 for push"<<endl;
        cout<<"Enter 2 for pop"<<endl;
        cout<<"Enter 3 for display"<<endl;
        cout<<"Enter 4 for exit"<<endl;
        cin>>j;
        switch(j)
        {
        case 1:
            cout<<"stack :";
            cin>>x;
            push(x,n);
            break;

        case 2:
            x=pop();
            cout<<x;
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
    }
     while(j>=1 && j<=4);
}
