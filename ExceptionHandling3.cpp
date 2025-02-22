#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	try{
		throw runtime_error("Runtime error occured!");
	} catch(runtime_error &e){
		cout<<"Caught Exception: "<<e.what()<<endl;
	}
	cout<<"Program continues.."<<endl;
	
	return 0;
}
