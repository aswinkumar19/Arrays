#include<iostream>
using namespace std;
int Rotate(int arr[],int n)
{
    int x=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
}
int main()
{
    int arr[]={5,6,7,8,9};
    int i;
    int n=sizeof(arr)/sizeof(arr[0]);
Rotate(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
    return 0;
}