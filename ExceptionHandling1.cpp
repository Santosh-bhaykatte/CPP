/* -------- Exception handling -----------

# Mechanism used to detect & handle exceptions(runtime errors) in a controlled manner so that
program continues execution without terminating abruptly.

# An exception is unexpected condition or event that occurs during execution of program causing
program to crash or terminate

# try, catch & throw

# syntax -
	try{
		//code that might throw an exception
		throw exception_type;	//throwing an exception
	} catch(exception_type exception_variable) {
		//code to handle exception
	}
	
# we can use multiple catch blocks to handle diffrent types of exceptions
*/
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	
	try{
		if(b == 0)
			throw "Division by zero error!";	//throws string exception
		cout<<"Result: "<<a/b<<endl;
	} catch(const char* e){
		cout<<"Exception: "<<e<<endl;
	}
	cout<<"Program continues..."<<endl;
	
	return 0;	
}	

