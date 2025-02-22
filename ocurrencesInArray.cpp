//find no. occurences of an element in an array
#include<iostream>
using namespace std;

int findOcurrences(int* arr, int n, int val){
	bool isTrue = false;
	int cnt = 0;
	
	cout<<"\nValue found at positions : ";
	for(int i=0; i<n; ++i){
		if(*(arr+i) == val){
			isTrue = true;
			++cnt;
			cout<<"["<<i+1<<"] ";
		}
	}
	if(isTrue){
		return cnt;
	} else{
		cout<<"Not Found!"<<endl;
		return 0;
	}
}

int main()
{
	int n, val;
	cout<<"Enter Array Size : ";
	cin>>n;
	int arr[n];			//variable length array
	
	//input values
	cout<<"Enter values : ";
	for(int i=0; i<n; ++i){
		cin>>arr[i];
	}
	
	cout<<"Enter value to search : ";
	cin>>val;
	
	int cnt = findOcurrences(arr, n, val);
	
	if(cnt > 0)
		cout<<"\nCount : "<<cnt<<endl;
	else
		cout<<"\nCount : "<<cnt<<endl;
		
	return 0;
}
