#include<iostream>
using namespace std;

int sumDistinctMaxEle(int arr[], int n) {
	int max1, max2;
	max1 = -23456789;
	max2 = -23456789;
	
	for(int i=0; i<n; i++){  
		if(arr[i] > max1){
			max2 = max1; //move the current max1 to max
			max1 = arr[i];
		} else if(arr[i] > max2 && arr[i] < max1){
			max2 = arr[i];
		}
	}
	
	return max1+max2;
}

int main()
{
	int n;
	cout<<"Enter Total numbers: ";
	cin>>n;
	
	int numbers[n];
	cout<<"Enter values: ";
	for(int i=0; i<n; i++){
		cin>>numbers[i];
	}
	
	int sum = sumDistinctMaxEle(numbers, n);
	cout<<"Sum: "<<sum;
	
	return 0;
}
