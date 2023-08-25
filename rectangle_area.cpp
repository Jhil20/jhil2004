#include<iostream>
using namespace std;
int main()
{
    cout<<"This program is prepared by JHIL 22CE009\n"<<endl;
    int arr[50];
    int size,cnt=0;
    int length,breadth;
    cout<<"Enter the size of an array :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"arr["<<i<<"]:";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //for(int i=0;i<size;i++)
    //{
        //cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
    //}
    for(int j=0;j<size;j++)
    {
            if(arr[j]==arr[j+1])
            {
                if(cnt==1)
                {
                    breadth=arr[j];
                    break;
                }
                cnt++;
                length=arr[j];
                j++;
            }

    }
    if(cnt==0)
    {
        cout<<"Can't determine maximum area of rectangle";
    }
    else{
        cout<<"Maximum area :"<<length*breadth;
    }
}
