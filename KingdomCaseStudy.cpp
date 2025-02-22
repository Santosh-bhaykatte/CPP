#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cout<<"Enter total number of soldiers for war: ";
	cin>>n;
	
	int A[n];
	
	cout<<"\nEnter values for parameter A: ";
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	
	int B[n];
	
	cout<<"\nEnter values for parameter B: ";
	for(int i=0; i<n; i++){
		cin>>B[i];
	}
	
	int k;
	cout<<"\n\nEnter number of war days: ";
	cin>>k;
	
	for(int day=0; day<k; day++){
		int Ni, Nj;
		cout<<"\nEnter range of soldiers(within total no. soldiers) for day "<<day+1<<endl;
		cin>>Ni;
		cin>>Nj;
		
		Ni--;
		
		int selected_soldier = Ni;
		
		for(int i=Ni+1; i<Nj; i++){
			if(A[i] > A[selected_soldier] ||
			A[i] == A[selected_soldier] && B[i] < B[selected_soldier] ||
			A[i] == A[selected_soldier] && B[i] == B[selected_soldier] && i < selected_soldier){
				selected_soldier = i;
			}
		}
		
		cout<<"\nSoldier "<<selected_soldier+1<<" is selected for day "<<day+1<<endl;
	}
	
	return 0;
}

