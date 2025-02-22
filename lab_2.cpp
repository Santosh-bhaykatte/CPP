// lab 2 - calculator
#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	int n1, n2;
	char op;
	cout<<"Enter num 1: ";
	cin>>n1;
	cout<<"Enter num 2: ";
	cin>>n2;
	cout<<"Enter operation (+, *, -, /, %): ";
	cin>>op;
	
	switch(op){
		case '+':
			cout<<"\nAddition : "<<n1+n2<<endl;
			break;
		case '-':
			cout<<"\nSubtraction: "<<n1+n2<<endl;
			break;
		case '*':
			cout<<"\nMultiplication: "<<n1*n2<<endl;
			break;
		case '/':
			try{
				if(n2 == 0){
					throw runtime_error("Division by zero");
				}
				cout<<"\nDivision: "<<n1/n2<<endl;
			} catch(const runtime_error& e){
				cout<<e.what()<<endl;
			}
			break;
		case '%':
			cout<<"\nRemainder: "<<n1%n2<<endl;
	} 
	return 0;
}
