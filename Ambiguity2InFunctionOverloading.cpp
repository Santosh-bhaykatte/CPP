#include<iostream>
using namespace std;

//function with default argument
int add(int a, int b = 10){
	return a+b;
}

//function without default argument
int add(int a, int b){
	return a+b;
}

int main()
{
	// ambiguity 2: due to use of default arguments
	cout<<"Result : "<<add(10, 20)<<endl;
	return 0;
}
