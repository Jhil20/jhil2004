#include<iostream>
using namespace std;

void linearsearch(int arr[],int n,int key)
{
    int flag=0;
    for(int j=0;j<=n;j++)
    {
        if(arr[j]==key)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"FOUND";
    }
    else{
        cout<<"NOT FOUND";
    }
}
int main()
{
    int arr[20];
    int size,key;
    cout<<"Enter the number of elements:";
    cin>>size;
    cout<<"Enter the element to be searched:";
    cin>>key;
    for(int i=0;i<=size;i++)
    {
        cin>>arr[i];
    }
    linearsearch(arr,size,key);
}
