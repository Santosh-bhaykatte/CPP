//dynamic 2d array - rows & cols are determined during runtime
//memory allocation is done in two steps:
//		1. allocate memory for rows (using array of pointers)
//		2. allocate memory for cols in each row

//elements can be stored either in contiguous or non-contiguous
//it can also be represented as a flattened 1d array
//this is useful when we want to avoid overhead of managing pointers for rows

#include<iostream>
using namespace std;

int main()
{
	int rows = 3, cols = 4;
	
	//allocate memory for rows
	int** arr = new int*[rows]; 	//1. declare an array of pointers
	
//	int** arr;
//	arr = new int*[rows];
	
	for(int i=0; i<rows; ++i){
		arr[i] = new int[cols];		//2. allocate memory for cols in each row
	}
	
	//intialize array
	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			arr[i][j] = i+j;
		}
	}
	
	//access elements
	cout<<"Array Elements: "<<endl;
	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			cout<< arr[i][j] << " ";
		}
		cout<<endl;
	}
	
	//deallocate memory
	for(int i=0; i<rows; ++i){
		delete arr[i];			//free memory for each row
	}
	
	delete[] arr;				//free memory for array of pointers
		
	return 0;
}
