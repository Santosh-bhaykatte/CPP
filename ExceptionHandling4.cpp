//rethrowing exception
#include<iostream>
using namespace std;

void test(){
	try{
		throw "Test Exception!";
	} catch(const char* e){
		cout<<"Caught in test(): "<<e<<endl;
		throw;
	}
}

int main()
{
	try{
		test();
	} catch(const char* e){
		cout<<"Caught in main(): "<<e<<endl;
	}
		
	return 0;
}
