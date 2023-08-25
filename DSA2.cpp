#include<iostream>
using namespace std;
int maximum(int max_obj,int count)
{
    if(max_obj>count)
    {
        return max_obj;
    }
    else
    {
        return count;
    }
}
void bag(int n,int c,int k,int w[])
{
    int i,max_obj=0;
    for(int i=0;i<n;i++)
    {
        int total=0;
        int count=0;
        for(int j=i;j<n;j++)
        {
            total+=w[j];
            count+=1;
            if(total>=k && total<=c)
            {
                max_obj=maximum(max_obj,count);
            }
            if(total>c)
            {
                break;
            }
        }
    }
    cout<<"Maximum number of objects are : "<<max_obj;
}
int main()
{
    cout<<"This program is prepared by JHIL 22CE009\n\n";
    int n,c,k;
    int w[20];
    cout<<"Enter the number of objects :";
    cin>>n;
    cout<<"Enter the maximum capacity of knapsack :";
    cin>>c;
    cout<<"Enter the minimum capacity of knapsack :";
    cin>>k;
    cout<<"Enter the weight of the objects"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the weight of object "<<i+1<<": ";
        cin>>w[i];
    }
    bag(n,c,k,w);

}
