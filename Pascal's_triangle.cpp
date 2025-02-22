//runs correctly upto n = 5

#include<iostream>
using namespace std;

int main(){
	int n = 5, val = 1;
	
	for(int i=1; i<=n; i++){
		//spaces
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		//values
		int temp = val;
		
		while(temp > 0){
			int d = temp % 10;
			temp /= 10;
			cout<<d<<" ";
		}
		
		val *= 11;
		cout<<endl;
	}
	
	return 0;
}
