//user-defined namespace
#include<iostream>
using namespace std;

namespace Math{
	int add(int a, int b){
		return a+b;
	}
	int multiply(int a, int b){
		return a*b;
	}
}

//using namespace Math;
using Math::add;
using Math::multiply;

int main()
{
	cout<<"Sum: "<<add(5, 10)<<endl;
	cout<<"Product: "<<multiply(5, 5)<<endl;
	return 0;
}
