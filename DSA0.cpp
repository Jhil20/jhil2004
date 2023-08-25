//ashdiwubhsidwbdu     wd
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int l,int h,int key);
int binary_search(int l,int h,int arr[],int key);
void linear_search(int a[],int key,int n);
void search(int number);
void search(int number,int arr[],int key,int n,int l,int h,int a)
{
     switch(number)
    {
        case 1:
        linear_search(arr,key,n);
        break;
        case 2:
        a=binary_search(arr,l,h,key);
        if(a>0)
         cout<<"Found";
        else if(a<0)
            cout<<"Not Found";
        break;
        case 3:
        a=binary_search(l,h,arr,key);
        if(a>0)
         cout<<"Present";
        else if(a<0)
            cout<<"Not Present";
        break;

    }
}
void linear_search(int a[],int key,int n)
{
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {

            flag=0;

            break;
        }
    }
    if(flag==1)
    {
        cout<<"Number is not Present in Array";
    }
    else if(flag==0)
    {
        cout<<"Number is present in array";
    }
}
 int binary_search(int arr[],int l,int h,int key)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==key)
            return mid;
            else if(arr[mid]>key)
            {
                h=mid-1;
            }
            else
                l=mid+1;
    }
    return -1;
}
int binary_search(int l,int h,int arr[],int key)
{
    int mid;
    mid=(l+h)/2;
    if(l<=h)
    {
        if(arr[mid]==key)
            return mid;
            else if(arr[mid]>key)
                binary_search(l,mid-1,arr,key);
            else if(arr[mid]<key)
                binary_search(mid+1,h,arr,key);
    }
    else
        return -1;

}
int main()
{
    cout<<"\nThis program is prepared by JHIL 22ce009\n";
    int arr[30],l=0,n,key,number,a;
    cout<<"Enter the size: ";
    cin>>n;
    int h=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i+1<<"]: ";
        cin>>arr[i];
    }
    cout<<"Enter your Key Element: ";
    cin>>key;
    cout<<"Enter 1 for Linear_Search"<<endl;
    cout<<"Enter 2 for binary_search"<<endl;
    cout<<"Enter 3 for Recursive binary_search"<<endl;
    cout<<"Enter your number: ";
    cin>>number;
    search(number,arr,key,n,l,h,a);
    cout<<endl;
    cout<<"Enter the size: ";
    cin>>n;
     h=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i+1<<"]: ";
        cin>>arr[i];
    }
    cout<<"Enter your Key Element: ";
    cin>>key;
    cout<<"Enter your number: ";
    cin>>number;
  search(number,arr,key,n,l,h,a);
    cout<<endl;
     cout<<"Enter the size: ";
    cin>>n;
     h=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i+1<<"]: ";
        cin>>arr[i];
    }
    cout<<"Enter your Key Element: ";
    cin>>key;
    cout<<"Enter your number: ";
    cin>>number;
    search(number,arr,key,n,l,h,a);

    return 0;

}

