/*Armstrong number is a number which is equals to the sum of it's digits raised to the power
of total no. digits*/
// eg. 153, 370, 407 (all one digit numbers are armstrong)
#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num){
	int temp, cnt = 0;
	temp = num;
	
	//count no. of digits
	while(num > 0){
		num /= 10;
		++cnt;
	}
	num = temp;
	
	//check armstrong or not
	int digit, sum = 0;
	while(num > 0){
		digit = num % 10;
		sum += (int)pow(digit, cnt);
		num /= 10;
	}
	if(sum == temp){
		return true;
	}else{
		return false;	
	}
}

int main(){
	int num;
	cout<<"Enter non-negative number: ";
	cin>>num;
	
	if(!isArmstrong(num)){
		cout<<"Not armstrong\n";
	}else{
		cout<<"armstrong"<<endl;
	}
	return 0;
}
