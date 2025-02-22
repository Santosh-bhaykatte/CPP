#include<iostream>
using namespace std;

//func to add two integers
int add(int a, int b){
	return a+b;
}

//func to add two floating point numbers
float add(float a, float b){
	return a+b;
}

int main()
{
	// ambiguity 1 : due to implicit type conversion
	cout<<"Result : "<<add(3.5, 4.5)<<endl;
	return 0;
}
