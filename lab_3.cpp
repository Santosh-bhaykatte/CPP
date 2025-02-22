// lab 2
#include<iostream>
using namespace std;

void swapByValue(int a, int b){
	a = a+b;
	b = a-b;
	a = a-b;
}

void swapByReference(int &a, int &b){
	a = a*b;
	b = a/b;
	a = a/b;
}

int main()
{
	int a, b;
	cout<<"Enter num 1: ";
	cin>>a;
	cout<<"Enter num 2: ";
	cin>>b;
	
	cout<<"\nBefore swapping: ";
	cout<<"a: "<<a<<"\t"<<"b: "<<b<<endl;
	
//	swapByValue(a, b);
	swapByReference(a, b);
	
	cout<<"\nAfter swapping: ";
	cout<<"a: "<<a<<"\t"<<"b: "<<b<<endl;
	
	return 0;
}
