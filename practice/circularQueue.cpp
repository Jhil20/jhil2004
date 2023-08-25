#include<iostream>
int f=-1;
int r=-1;
int Queue[5];
using namespace std;
void enqueue(int siz,int n)
{
    if(f==-1 && r==-1)
    {
        f=r=0;
        Queue[r]=n;
        r++;
    }
    else
    {
        Queue[r]=n;
        r++;
        if(r==siz)
        {
            r=0;
        }
    }
    if(f==r)
    {
        cout<<"overflow";
    }
}
void dequeue(int siz)
{
    int x;
    x=Queue[f];
    f++;
    if(f==siz-1)
    {
        f=0;
    }
    cout<<x<<endl;
}
void display()
{
    for(int i=f;i<=r;i++)
    {
        cout<<Queue[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int siz;
    cin>>siz;
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
    }while(action>=1 && action<=3);
}
