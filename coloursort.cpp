#include<iostream>
using namespace std;
int main()
{
    cout<<"This program is prepared by JHIL 22CE009\n"<<endl;
    int a[50];
    int cnt1=0,cnt2=0,cnt3=0;
    int size;
    cout<<"Enter the size of colours in an array : ";
    cin>>size;
    cout<<"Enter 0 for red colour"<<endl;
    cout<<"Enter 1 for white colour"<<endl;
    cout<<"Enter 2 for blue colour"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"colour["<<i<<"]:";
        cin>>a[i];
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            cnt1++;
        }
        if(a[i]==1)
        {
            cnt2++;
        }
        if(a[i]==2)
        {
            cnt3++;
        }
    }
    for(int i=0;i<cnt1;i++)
    {
        a[i]=0;
    }
    for(int i=cnt1;i<cnt2+cnt1;i++)
    {
        a[i]=1;
    }
    for(int i=cnt1+cnt2;i<size;i++)
    {
        a[i]=2;
    }
    cout<<"Sorted colours "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"colour["<<i<<"]:"<<a[i]<<endl;
    }
}
