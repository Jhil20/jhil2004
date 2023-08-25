#'include<iostream>
using namespace std;

main()
{

    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }

    int min_index,pass;
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }

        if(min_index!=i)
        {
            swap(a[i], a[min_index]);
    }
}
    for(int i=0; i < n; i++)
        {
        cout << a[i] << " ";
        }

}
