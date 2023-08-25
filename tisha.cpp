#include<iostream>
using namespace std;

int maxx(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}
main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int count,obj,c,k,max=0;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Enter k: ";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        count=0,obj=0;
        for(int j=i;j<n;j++)
        {
            obj+=a[j];
            count++;
           if(obj<=c && obj>=k)
           {
            max=maxx(count,max);
           }
            if(obj>c)
            break;
        }

    }
    cout<<"Total obj: "<<max;
}
