#include<iostream>
using namespace std;

int main()
{
	try{
		throw 'A';	//character exception
	} catch(int e){
		cout<<"Caught an integer: "<<e<<endl;
	} catch(...){
		cout<<"Caught an unknown exception!"<<endl;
	}
	return 0;
}
