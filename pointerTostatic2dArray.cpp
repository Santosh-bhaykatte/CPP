#include<iostream>
using namespace std;

//function to pass 2d array with fixed col size
void printArray1(int arr[][3], int rows){
	for(int i=0; i<rows; ++i){
		for(int j=0; j<3; ++j){
			cout << arr[i][j] <<" ";		//traverse each row & each col within a row
		}
		cout<<endl;
	}
}

//function to pass 2d array as pointer
void printArray2(int (*ptr)[3], int rows){
	for(int i=0; i<rows; ++i){
		for(int j=0; j<3; ++j){
			cout << *(*(ptr+i)+j) <<" ";		//traverse each row & each col within a row
		}
		cout<<endl;
	}
}

//function to return a static 2d array as pointer
int (*getArray())[3]{
	static int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
	return arr; 		//return pointer to first row
}


int main()
{
	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};		// 2*3 matrix
//	cout<<arr<<endl;		//pointer to first row
//	cout<<&arr[0]<<endl;
//
//	cout<<arr[0]<<endl;		//pointer to first element of first row
//	cout<<&arr[0][2]<<endl;

//	int* ptr = arr[1];		//ptr is pointer to first row
//	cout<<ptr<<endl;
//	cout<<&arr[1][0]<<endl; //address of ele at row 2 & col 1

	int (*ptr)[3] = arr;	//pointer to an entire array
	
	//accessing elements
	for(int i=0; i<2; ++i){
		for(int j=0; j<3; ++j){
			cout << *(*(ptr+i)+j)<<" ";		//traverse each row & each col within a row
		}
		cout<<endl;
	}
	
	cout<<endl;
	printArray1(arr, 2);
	
	cout<<endl;
	printArray2(arr, 2);
	
	cout<<endl;
	int (*arr1)[3] = getArray();	//recieve pointer to the 2d array
	
	for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
	
	return 0;
}
