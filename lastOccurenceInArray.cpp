//last occurence of value in array
#include<iostream>
using namespace std;

int findlastOcurrence(int* arr, int n, int val){
	for(int i=n-1; i>=0; --i){
		if(*(arr+i) == val){
			return i+1;
		}
	}
	return -1;
}

int main()
{
	int n, val;
	cout<<"Enter Array size : ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter values : ";
	for(int i=0; i<n; ++i){
		cin>>arr[i];
	}
	cout<<"Enter value to find : ";
	cin>>val;
	
	int res = findlastOcurrence(arr, n, val);
	cout<<(res > 0) ? ("Found at pos : "<<res<<endl) : "Not found" <<endl;
	
	return 0;
}
