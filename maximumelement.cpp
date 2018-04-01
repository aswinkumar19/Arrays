#include <iostream>
using namespace std;
int largest(int arr[], int n)
{
    int i;
	int max = 0;
	for (i = 0; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
    int n;
    int i,arr[i];
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result=largest(arr, n);
	cout<<result;
	return 0;
}

