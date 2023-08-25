#include<iostream>
using namespace std;

int sorting(int arr[],int n)
{
    int cnt=0;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cnt2++;
        for(int j=0;j<n-1;j++)
        {
            cnt1++;
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                cnt++;
            }
        }
    }
    cout<<"sorted elements are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Elements ["<<i+1<<"] :"<<arr[i]<<endl;
    }
        if(cnt==0)
        {
            cout<<"Number of times Elements exchanged is 0:"<<endl;
        }
        else
        {
            cout<<"Number of times Elements exchanged is :"<<cnt<<endl;
        }
        cout<<cnt1<<endl;
        cout<<cnt2<<endl;

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
