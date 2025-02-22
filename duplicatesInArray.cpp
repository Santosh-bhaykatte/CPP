//count no. of duplicates in an array
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
	
	for(int i = 0; i < n-1; ++i){
		if(ptr[i] == ptr[i+1]){
			cnt++;
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
	
	int cnt = duplicate(arr, n);
	cout<<"Total no. of duplicates : "<<cnt<<endl;
	
	return 0;
}
