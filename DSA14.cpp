#include<iostream>
int top=-1;
char arr[100];
using namespace std;
int push(int x)
{
        top++;
        arr[top]=x;
}
int pop()
{
        int x=arr[top];
        top--;
        return x;
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i];
    }
}
void balanced_paren(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]:";
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]=='[' || arr[j]=='{' || arr[j]=='(')
            {
                push(arr[j]);
            }
        else if((arr[j]==']'&&arr[top]=='[') || (arr[j]=='}'&&arr[top]=='{') || (arr[j]==')'&&arr[top]=='('))
            {
                pop();
            }
    }
    if(top==-1)
    {
        cout<<"BALANCED PARENTHESIS"<<endl;
    }
    else
    {
        cout<<"NOT A BALANCED PARENTHESIS"<<endl;
    }

}
int main()
{
    cout<<"This program is prepared by JHIL 22CE009\n"<<endl;
    int n;
    cout<<"Enter the size of an brackets :";
    cin>>n;
    balanced_paren(n);

}

