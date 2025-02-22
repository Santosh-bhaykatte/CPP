//dynamic 2d array as 1d array
#include<iostream>
using namespace std;

int main()
{
	int rows = 3, cols = 4;
	int* arr = new int[rows*cols];	//allocate memory as single block for all elements
	
	//initialize
	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			arr[i*cols+j] = i+j;	//arr[row_idx * cols + col_idx]
		}
	}
	
	//print
	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			cout << arr[i*cols+j] << " ";
		}
		cout<<endl;
	}
	
	delete[] arr;
	return 0;
}
