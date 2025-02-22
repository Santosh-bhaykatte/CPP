#include<iostream>
using namespace std;

void transposeMatrix(int* arr, int n, int m){
	int i = 0, j = 0;
	while(i < n-1 || j < m-1){
		while(j < m){
			if(i == j){
				++j;
				continue;
			}
			int temp = *(arr + i*m + j);	//*(arr + row_idx * cols + col_idx)
			*(arr + i*m + j) = *(arr + j*m + i);
			*(arr + j*m + i) = temp;
			++j;
		}
		++i;
		j = i;
	}
}

int main()
{
	int n, m;
	cout<<"Enter rows: ";
	cin>>n;
	cout<<"Enter cols: ";
	cin>>m;
	
	if(n != m){
		cout<<"Error : only square matrix required"<<endl;
		return 0;
	}
	
	int arr[n][m];
	
	//input 2d array
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			cin>>arr[i][j];
		}
	}
	
	transposeMatrix((int*)arr, n, m);
	
	cout<<"\nResult : "<<endl;
	//display values
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
