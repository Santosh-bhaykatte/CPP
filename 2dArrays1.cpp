//2d array - array of arrays
//address_of_ele = base_address + ((row_idx)*cols + col_idx)* sizeof(data_type)
#include<iostream>
using namespace std;

int main()
{
	/*
	int arr[2][3]; 		//declaration
	int arr[2][3] = {	//declaration with initialization
		{1, 2, 3},
		{4, 5, 6}
	};
	cout<<arr<<endl;	//returns base address
	*/
	
	/*
	int rows = 3, cols = 3;
	int arr[rows][cols];
	
	//input 2d array
	cout<<"Enter values: "<<endl;
	for(int i=0; i<rows; ++i){			//loop over rows
		for(int j=0; j<cols; ++j){		//loop over cols
			cin>>arr[i][j];
		}
	}
	
	//output 2d array
	cout<<"Array values: "<<endl;
	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	
	return 0;
}
