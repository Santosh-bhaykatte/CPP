// modifying access specifier of inherited member

#include<iostream>
using namespace std;

class Base{
	protected:
		int a, b;
	public:
		int c;
};

class Derived : private Base{
	public:
		using Base::a;		//modifying access specifier to public
		using Base::c;
		using Base::b;
		void display(){
			cout<<a<<"\t"<<b<<"\t"<<c<<endl;
		}
};

int main()
{
	Derived d;
	d.a = 10;
	d.b = 11;
	d.c = 12;
	d.display();
	
	return 0;
}
