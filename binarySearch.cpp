#include<iostream>
using namespace std;

int bs(int arr[],int key,int low,int high)
{
    int mid;
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
        else{
            high=mid-1;
        }
    }
    return false;
}
int main()
{
    int arr[20];
    int size,low=0,high,key,res;
    cout<<"Enter the number of elements : ";
    cin>>size;
    cout<<"Enter the elements to be searched :";
    cin>>key;
    cout<<"Enter the elements"<<endl;
    high=size-1;
    for(int i=0;i<size;i++)
        {

            cout<<"arr["<<i<<"]";
            cin>>arr[i];
        }
        res=bs(arr,key,low,high);
        //cout<<res;
        if(res!=-1)
        {
            cout<<res;
        }
        else
        {
            cout<<"not found";
        }
}
