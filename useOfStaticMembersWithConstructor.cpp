//use of static members with constructors & destructors
#include<iostream>
using namespace std;

class MyClass{
	static int count;
	public:
		MyClass(){
			++count;
			cout<<"Object created - count: "<<count<<endl;
		}
		~MyClass(){
			--count;
			cout<<"Object destroyed - count: "<<count<<endl;
		}
		static int getCount();
};

//initialization of static data member
int MyClass::count = 0;

//definition of static member function
int MyClass::getCount(){
	return count;
}

int main()
{
	MyClass obj1;		//obj1 created
	cout<<"current count: "<<MyClass::getCount()<<endl;
	
	{
		MyClass obj2;	//obj2 created
		cout<<"current count: "<<MyClass::getCount()<<endl;
	}
	//here obj2 goes out of scope
	cout<<"current count: "<<MyClass::getCount()<<endl;
	
	return 0;
}
