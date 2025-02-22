//Multipath inheritance ---- Diamond problem
#include<iostream>
using namespace std;

class Base{
	public:
		void show(){
			cout<<"Inside Base :: show()"<<endl;
		}
};

class Derived1 : public Base{
	public:
};

class Derived2 : public Base{
	public:
};

class ChildClass : public Derived1, Derived2{
	
};

int main()
{
	ChildClass cobj; 
	cobj.show();	//ambiguous call
	
	return 0;
}
