/* ------ using keyword -------

# using keyword in inheritance is powerful feature in c++ that allows you to control visibility
& accessibility of inherited members of base class.

# It serves multiple purposes

1. Exposing hidden base class methods -
	when derived class defines function with same name as in base class, all overloaded versions of
	that function in base class are hidden by derived class. using can be used to bring hidden
	methods of base class to derived class scope

2. Inheriting constructor -
	using keyword allows derived class to inherit base class constructors. This eliminates the need
	to manually define constructor in derived class that simply call the base class constructor

3. modifying access specifier - using keyword can be used to change access specifier of inherited
   member from base class
   
4. resolving ambiguity in multiple inheritance - using keyword can help resolve ambiguity when 
	two base classes have members with same name
	
*/	

#include<iostream>
using namespace std;

class Base{
	public:
		void display(int val){
			cout<<"Base display(int): "<<val<<endl;
		}
		void display(double val){
			cout<<"Base display(double): "<<val<<endl;
		}
};

//shadowing base class methods
class Derived : public Base{
	public:
		using Base::display;		//exposing hidden base class methods into derived class
		void display(string name){
			cout<<"Derived display(string): "<<name<<endl;
		}
};

int main()
{
	Derived d;
	d.display(10);
	d.display(23.989);
	d.display("Tony");
	return 0;
}
