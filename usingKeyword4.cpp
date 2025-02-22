//resolving ambiguity during multiple inheritance
#include<iostream>
using namespace std;

class Base1{
	public:
		void show(){
			cout<<"Base 1 class"<<endl;
		}
};

class Base2{
	public:
		void show(){
			cout<<"Base 2 class"<<endl;
		}
};

class Derived : public Base1, Base2{
	public:
		using Base1::show;		//uses Base1 show() method
		void display(){
			cout<<"Derived class"<<endl;
		}
};

int main()
{
	Derived d;
	d.show();
	return 0;
}
