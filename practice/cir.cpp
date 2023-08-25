#include<iostream>
int f=-1;
int r=-1;
int siz=5;
//cout<<"size: ";
//cin>>siz;
int q[5];
using namespace std;
void enqueue(int siz,int n)
{
    if(f==-1 && r==-1)
    {
        f=r=0;
        q[r]=n;
        r++;
    }
    else if(f==r)
        {
        cout<<"overflow";
        }
    else
    {
        q[r]=n;
        r++;
        if(r==siz)
        {
            r=0;
        }
    }
}
void dequeue(int siz)
{
    int x;
    x=q[f];
    f++;
    if(f==siz-1)
    {
        f=0;
    }
    cout<<x<<endl;
}

void display()
{
    while(f!=-1)
    {
        int x=q[f];
        f++;
        cout<<x;
    }
}
int main()
{
    int action;
    do
    {
        cout<<"Enter action";
        cin>>action;
        switch(action)
        {
        case 1:
            int x;
            cin>>x;
            enqueue(siz,x);
            break;
        case 2:
            dequeue(siz);
            break;
        case 3:
            display();
            break;
        }
    }while(action !=0);
}
