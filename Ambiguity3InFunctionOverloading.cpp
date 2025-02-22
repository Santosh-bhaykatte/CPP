#include<iostream>
using namespace std;

//function
void display(int* ptr){
	cout <<"pointer to int"<<endl;
}

//overloaded function
void display(double* ptr){
	cout <<"pointer to double"<<endl;
}

int main()
{
	// ambiguity 3 : due to passing NULL pointers
	cout<<display(NULL)<<endl;
	return 0;
}
