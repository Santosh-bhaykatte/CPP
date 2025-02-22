#include<iostream>
using namespace std;

void pattern(int n){
	//upper half
	
	//outer loop
	for(int i=1; i<=n; i++){
		//spaces part 1
		for(int j=1; j <= n-i; j++){
			cout<<" ";
		}
		
		//star part 1
		int m = 2*i-1;
		
		for(int k=1; k <= m; k++){
			if(i % 2 == 0){
				cout<<" ";
			} else{
				if(k == 1 || k == m){
					cout<<"*";
				} else{
					cout<<" ";
				}
			}
		}
		
		//spaces part 2
		for(int x=1; x <= 2*(n-i); x++){
			cout<<" ";
		}
		
		//star part 2
		int l = 2*i-1;
		
		for(int y=1; y <= l; y++){
			if(i % 2 == 0){
				cout<<" ";
			} else{
				if(y == 1 || y == m){
					cout<<"*";
				} else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	
	//lower half
	
	//outer loop
	for(int i=n-1; i>=1; i--){
		//spaces part 1
		for(int j=1; j <= n-i; j++){
			cout<<" ";
		}
		
		//star part 1
		int m = 2*i-1;
		
		for(int k=1; k <= m; k++){
			if(i % 2 == 0){
				cout<<" ";
			} else{
				if(k == 1 || k == m){
					cout<<"*";
				} else{
					cout<<" ";
				}
			}
		}
		
		//spaces part 2
		for(int x=1; x <= 2*(n-i); x++){
			cout<<" ";
		}
		
		//star part 2
		int l = 2*i-1;
		
		for(int y=1; y <= l; y++){
			if(i % 2 == 0){
				cout<<" ";
			} else{
				if(y == 1 || y == m){
					cout<<"*";
				} else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	pattern(n);
	
	return 0;
}
