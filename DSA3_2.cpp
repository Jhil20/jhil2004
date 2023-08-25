#include<iostream>
using namespace std;
int sorting(int arr[],int n)
{
    int min_index;
    for(int pass=0;pass<n-1;pass++)
    {
        min_index=pass;
        for(int i=pass+1;i<n;i++)
        {
            if(arr[i]<arr[min_index])
            {
                min_index=i;
            }
        }
        if(min_index==pass)
        {
            int temp;
            temp=arr[pass];
            arr[pass]=arr[min_index];
            arr[min_index]=temp;
        }
    }
    cout<<"sorted elements are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Elements ["<<i+1<<"] :"<<arr[i]<<endl;
    }
}
int main()
{
    cout<<"This program is prepared by JHIL 22CE009\n\n";
    int arr[20];
    int size;
    cout<<"Enter the number of elements :";
    cin>>size;
    for(int j=0;j<size;j++)
    {
        cout<<"Elements ["<<j+1<<"] :";
        cin>>arr[j];
    }
    sorting(arr,size);
}
