#include<iostream>
using namespace std;
int missingelement(int A[],int start,int end)
{
    if(start > end)
    return end+1;
    if(start!=A[start])
    {
    return start;
    }
    int mid = (start +end)/2;
    if(A[mid]==mid)
{
    return missingelement(A,mid+1, end);
}
    
    return missingelement(A, start, mid);
}
int main()
{
    int A[]={0,1,2,3,4,5,6,7,10};
    int n=sizeof(A)/sizeof (A[0]);
    
    int start=0;
    int end=n-1;
    int result=missingelement(A,0,n-1);
    cout<<"missing element is"<<result;
    return 0;
}