#include<iostream>
using namespace std;
int maxSubArraySum(int a[], int size)
{
int max_so_far = a[0];
int curr_max = a[0];
for (int i = 1; i < size; i++)
{
		curr_max = max(a[i], curr_max+a[i]);
		max_so_far = max(max_so_far, curr_max);
}
return max_so_far;
}
int main()
{
    int i,a[i],n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"now enter the value of array elements";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int max_sum = maxSubArraySum(a, n);
cout << "Maximum contiguous sum is " << max_sum;
return 0;
}

