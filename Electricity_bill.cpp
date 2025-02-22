#include<iostream>
using namespace std;

int main(){
	int units;
	float totalBill;
	cout<<"Enter units consumed: ";
	cin>>units;
	
	if(units <= 100){
		totalBill = units*5;
		cout<<"Total bill: "<<totalBill<<endl;
	} else if(units > 100 && units <= 200){
		units = units - 100;
		totalBill = units*6 + 500;
		cout<<"Total bill: "<<totalBill<<endl;
	} else{
		units = units - 200;
		totalBill = units*7 + 1100;
		cout<<"Total bill: "<<totalBill<<endl;
	}
	
	return 0;
}
