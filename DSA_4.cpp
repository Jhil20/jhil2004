#include<iostream>
using namespace std;
int binary_search(int l,int h,int arr[],int key)
{
    int m;
    if(l<=h)
    {
       m=(l+h)/2;
       if(arr[m]>key)
       {
           return m;
       }
       else if (arr[m]>key)
       {
           binary_search(l,m-1,arr,key);
       }
       else
       {
           binary_search(m+1,h,arr,key);
       }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[20],n,l=0,key,j;
    cout<<"Enter the size of array :";
    cin>>n;
    int h=n-1;
    cout<<"Enter the element for searching :";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   j= binary_search(l,h,arr,key);
   if(j!=(-1))
   cout<<"position is  arr["<<j<<"]";
    else
    {
        cout<<"Not found";
    }
}
