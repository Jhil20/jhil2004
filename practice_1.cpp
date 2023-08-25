#include<iostream>
using namespace std;


main()
{
    int n,key,j;
    cout<<"Enter no of elements: ";
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }


    for(int i=2;i<=n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}
