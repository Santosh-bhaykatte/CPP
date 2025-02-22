/*
# A function with default arguments is a function where one or more parameters are given 
a default value in the function declaration.

# We can reduce the number of function overloads using default args when we want to call same
function with fewer arguments

# default args are specified in function declaration
# default argument must be assigned value in declaration
# default values are assigned from right to left in para list
# if caller does not provide values for default args. then default values are used
# if caller provides values then, default args are overrided
# default args are assigned only once in declaration
# default args allow a single function to handle diffrent number of arguments

Advantages - 
	1. incresed flexibility - we can call function with fewer args & rely on default values
	2. reduces func overloading
	3. better code maintainence - only one func need to be maintained instead of multiple
	overloaded functions 

*/
#include<iostream>
using namespace std;

int add(int, int b = 10);	//declaration

int add(int a, int b){		//definition
	return a+b;
}

//void welcome(string name="Alice", int age);

//function with default args
void greet(const char* name = "User", int age = 25){
	cout<<"Hello "<<name<<", you are "<<age<<" years old"<<endl;
}

int main()
{
	greet(); 			//uses default values
	greet("Santo"); 	//uses defult value 'age'
	greet("Tony", 54);	//uses provided values
	return 0;
}
