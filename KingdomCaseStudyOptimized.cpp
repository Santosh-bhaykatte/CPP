#include<iostream>
using namespace std;

int main()
{
	int N = 10;
	
	int A[N];
	int B[N];
	
	cout<<"Enter values for A: ";
	for(int i=0; i<N; i++){
		cin>>A[i];
	}
	cout<<"Enter values for B: ";
	for(int i=0; i<N; i++){
		cin>>B[i];
	}
	
	int k;
	cout<<"Enter no. days: ";
	cin>>k;
	
	for(int d=0; d<k; d++){
		int Ni, Nj;
		
		cout<<"Enter range of soldiers for day"<<d+1<<endl;
		cin>>Ni;
		cin>>Nj;
		
		Ni--;
		Nj--;
		
		int selected_soldier = Ni;
		
		for(int i=Ni+1; i<=Nj; i++){
			if(A[i] > A[selected_soldier] ||
			(A[i] == A[selected_soldier] && B[i] < B[selected_soldier]) ||
			(A[i] == A[selected_soldier] && B[i] == B[selected_soldier] && i < selected_soldier)){
				selected_soldier = i;
			}
		}
		cout<<"Selected soldier for day "<<d+1<<": "<<selected_soldier+1<<endl;
	}
	
}
