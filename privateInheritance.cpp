// ------------- private inheritance------------
#include<iostream>
using namespace std;

class Parent{
	int a = 10;
	protected:
		int b = 20;
	public:
		int c = 30;
		int getA(){
			return a;
		}
};

class Child : private Parent{
	int x = 11;
	protected:
		int y = 12;
	public:
		int z = 13;
		void show(){
			cout<<"a: "<<getA()<<"\tb: "<<b<<"\tc: "<<c<<endl;
			cout<<"x: "<<x<<"\ty: "<<y<<"\tz: "<<z<<endl;
		}
};

class GrandChild : private Child{
	int p = 21;
	protected:
		int q = 22;
	public:
		int r = 23;
		void display(){
			show();
			cout<<"p: "<<p<<"\tq: "<<q<<"\tr: "<<r<<endl;
		}
};

int main()
{
	GrandChild gcobj;
	gcobj.display();
	
	return 0;
}
