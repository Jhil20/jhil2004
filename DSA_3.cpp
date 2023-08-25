#include<iostream>
using namespace std;
int binary_search(int key,int l,int h,int arr[])
{
    for(int i=0;i<h;i++)
    {
        int m=(l+h)/2;
        if(arr[m]==key)
        {
            return m;
        }
        else if (arr[m]>key)
        {
           h=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return -1;
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
   j= binary_search(key,l,h,arr);
   if(j!=(-1))
   cout<<"position is  arr["<<j<<"]";
    else
    {
        cout<<"Not found";
    }
}

