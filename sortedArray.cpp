//cpp program using function overloading to sort 10 integer/long/double values
#include<iostream>
using namespace std;

void sortArray(int arr[], int n)
{
	for (int i=0; i<n; i++) {
	for (int i=0; i<n-1; i++) {
		int max = arr[i];
		if (arr[i] > arr[i+1]) {
			arr[i] = arr[i+1];
			arr[i+1] = max;
		}
	}
	}
	cout<<"Sorted Array: ";
	for (int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
}

int main(void)
{
	int n;
	cout<<"Input number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Input integers: ";
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	sortArray(arr, n);
}
