#include<iostream>
using namespace std;
void slidingWindow(int arr[],int size,int k)
{
    //int common=0,different=0;
    for(int i=0;i<=size-k;i++)
    {
        int cnt=0;
        for(int j=i;j<i+k;j++)
        {
            cnt++;
            for(int x=j;x<j;x++)
            {
                if(arr[j]==arr[x])
                {
                    cnt--;
                    break;
                }
            }
        }
        cout<<cnt;
    }
}
int main()
{
    int arr[100];
    int size,k;
    cout<<"Enter the size of an array :";
    cin>>size;
    cout<<"Enter the size of sliding window";
    cin>>k;
    for(int i=0;i<size;i++)
    {
        cout<<"arr["<<i+1<<"]:";
        cin>>arr[i];
    }
    slidingWindow(arr,size,k);
}
