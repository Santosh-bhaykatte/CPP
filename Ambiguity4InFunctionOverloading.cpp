#include<iostream>
using namespace std;

void display(int a){
	cout<<"pass by value : "<<a<<endl;
}

void display(int &a){
	cout<<"pass by reference : "<<a<<endl;
}

int main()
{
	int b = 10;
	// ambiguity 4 : due to pass by value & pass by reference
	cout<<display(b)<<endl;
	return 0;
}
