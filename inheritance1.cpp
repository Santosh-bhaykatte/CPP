/* Inheritance & modes of inheritance

# process of creating of new class(derived/sub/child) from an existing class(base/super/parent)

# newly created child class inherits properties & behaviors from parent class

# mechanism of extending the existing code reduces code redundancy

# derived class can have its own members also

# promotes code reuse, establishes hierarchical relationship among classes, improves flexibility

# Modes of Inheritance - 

1. public - 
		* public members become public in derived
		* protected members remain protected in derived
		* private members are inherited but not accessible
		
2. protected -
		* public and protected members of the base class become protected in the derived class.
		* private members are inherited but not accessible
		
3. private - 
		* public and protected members of the base class become private in the derived class.
		* private members are inherited but not accessible
		
# Each mode impacts visibility of inherited members in derived class

# all members are private within class by default
*/

#include<iostream>
using namespace std;

class Base{
	int a = 10;			//inheritable but not accessible
	protected:
		int b = 20;
	public:
		int c = 30;
		int getA(){
			return a;
		}
};

/*
//protected inheritance
class Derived : protected Base{
	int x = 11;
	protected:
		int y = 12;
	public:
		int z = 13;
		void show(){
			cout<<"a: "<<getA()<<endl;
			cout<<x<<"\t"<<y<<"\t"<<z<<endl;
			cout<<"b: "<<b<<"\t"<<"c: "<<c<<endl;
		}
};
*/

/*
//public inheritance
class Derived : public Base{
	int x = 11;
	protected:
		int y = 12;
	public:
		int z = 13;
		void show(){
			cout<<"a: "<<this->getA()<<"\tb: "<<b<<"\t"<<"c: "<<c<<endl;
			cout<<"x: "<<x<<"\t"<<"y: "<<y<<"\t"<<"z: "<<z<<endl;
		}
};

class Child : public Derived{
	int p = 21;
	protected:
		int q = 22;
	public:
		int r = 23;
		void show(){
			this->Derived::show();
			cout<<"p: "<<p<<"\t"<<"q: "<<q<<"\t"<<"r: "<<r<<endl;
		}
};
*/

int main()
{
	Derived dobj;
	dobj.show();
//	Child cobj;
//	cobj.Child::show();
//	cout<<sizeof(cobj)<<endl;
	
	return 0;
}




