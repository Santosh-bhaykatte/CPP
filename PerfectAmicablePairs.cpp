#include<iostream>
using namespace std;

int sumOfDivisors(int num){
	int sum=0;
	for(int j=1; j<num; j++){
		if(num%j==0){
			sum += j;
		}
	}
	return sum;
}

int main()
{
	int n = 1000;
	for(int i=1; i<=n; i++){
		int sum1 = sumOfDivisors(i);
		if(sum1 <= n){
			int sum2 = sumOfDivisors(sum1);
			if(sum2 == i){
				cout<<i<<" "<<sum1<<endl;
			}
		}
	}
}
