#include<iostream>
using namespace std;
int isorting(int arr[],int n)
{
    int key,j;
    for(int i=2;i<=n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    cout<<"sorted elements are "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"Elements ["<<i<<"] :"<<arr[i]<<endl;
    }
}
int main()
{
    cout<<"This program is prepared by JHIL 22CE009\n\n";
    int arr[20];
    int size;
    cout<<"Enter the number of elements :";
    cin>>size;
    for(int j=1;j<=size;j++)
    {
        cout<<"Elements ["<<j<<"] :";
        cin>>arr[j];
    }
    isorting(arr,size);
}
