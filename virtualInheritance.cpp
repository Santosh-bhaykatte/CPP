//Multipath inheritance ---- Diamond problem Solution [virtual Inheritance]
#include<iostream>
using namespace std;

class Base{
	public:
		void show(){
			cout<<"Inside Base :: show()"<<endl;
		}
};

class Derived1 : public virtual Base{
	public:
};

class Derived2 : virtual public Base{
	public:
};

class ChildClass : public Derived1, Derived2{
	
};

int main()
{
	ChildClass cobj; 
	cobj.show();
	
	return 0;
}
