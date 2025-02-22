#include<iostream>
using namespace std;

void transposeMatrix(int arr[3][3]){
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			arr[i][j] = arr[j][i];
		}
	}
}

int main()
{
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	transposeMatrix(arr);
	
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
