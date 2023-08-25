#include<iostream>
using namespace std;

int bs(int arr[],int key,int low,int high)
{
    int mid;
   //int j=low;
    for(int j=0;j<high;j++)
    {

        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}
int main()
{
    int arr[20],size;
    cout<<"Enter the number of elements : ";
    cin>>size;
    int low=0,high,key,res;
    high=size-1;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++)
        {

            cout<<"arr["<<i<<"]";
            cin>>arr[i];
        }
    cout<<"Enter the elements to be searched :";
    cin>>key;
        res=bs(arr,key,low,high);
        if(res!=-1)
        {
            cout<<res;
        }
        else
        {
           cout<<"not found";
        }
}
