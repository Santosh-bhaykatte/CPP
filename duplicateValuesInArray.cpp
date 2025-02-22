//count no. of duplicates in an array
//1. sort array
//2. logic to find duplicates
#include<iostream>
using namespace std;

void bubbleSort(int* arr, int n){
	for(int i = 0; i < n-1; ++i){
		for(int j = 0; j <= n-i-2; ++j){
			if(*(arr+j) > *(arr+(j+1))){
				int temp = *(arr+j);
				*(arr+j) = *(arr+(j+1));
				*(arr+(j+1)) = temp;
			}
		}
	}
}

int duplicate(int* ptr, int n){
	if(n == 0){
		cout<<"Empty array!"<<endl;
		return 0;
	}
	
	bubbleSort(ptr, n);
	//logic
	int cnt = 0;
	bool isTrue = false;
	
	for(int i = 0; i < n-1; ++i){
		if(ptr[i+1] > ptr[i]){
			isTrue = false;
		}else if(ptr[i] == ptr[i+1]){
			if(!isTrue){
				++cnt;
				cout<<ptr[i]<<" ";
				isTrue = true;
			}
		}
	}
	return cnt;
}

int main()
{
	int n;
	cout<<"Array size : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter values : ";
	for(int i=0; i<n; ++i){
		cin>>arr[i];
	}
	
	cout<<"duplicate values : ";
	int cnt = duplicate(arr, n);
	cout<<"\nTotal no. of duplicate values : "<<cnt<<endl;
	
	return 0;
}
