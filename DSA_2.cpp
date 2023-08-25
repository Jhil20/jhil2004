#include<iostream>
using namespace std;
void linear_search(int n,int key,int arr[]);

int main()
{
    int n,key,arr[20];
    cout<<"Enter the size of elements";
    cin>>n;
    cout<<"Enter the element for searching";
    cin>>key;
    linear_search(n,key,arr);
}
void linear_search(int n,int key,int arr[])
{
    int flag=0;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
}
