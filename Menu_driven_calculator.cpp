#include<iostream>
using namespace std;

int main(){
	int num1, num2, op;
	
	do{
		cout<<"Enter num1: ";
		cin>>num1;
		cout<<"Enter num2: ";
		cin>>num2;
		
		cout<<"\nMenu:\n"<<endl;
		cout<<"1. Add\n";
		cout<<"2. Subtract\n";
		cout<<"3. Multiply\n";
		cout<<"4. Divide\n";
		
		cout<<"\nEnter choice: ";
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ans: "<<num1+num2<<endl;
				break;
			case 2:
				cout<<"Ans: "<<num1-num2<<endl;
				break;
			case 3:
				cout<<"Ans: "<<num1*num2<<endl;
				break;
			case 4:
				cout<<"Ans: "<<num1/num2<<endl;
				break;	 				
		}
		cout<<"\nWant to continue? press 1 else press 0 : ";
		cin>>op;
	} while(op);
	
	return 0;
}
