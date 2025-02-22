// ++prefix operator overloading using non-static member function
#include<iostream>
using namespace std;

class Demo{
	int a, b;
	public:
		Demo(int x, int y) : a(x), b(y){
		}
		void display(){
			cout<<"\na: "<<a<<endl<<"b: "<<b<<endl;
		}
		void operator++();
};

void Demo::operator++(){
	++a;
	++b;
}

int main()
{
	Demo d1(5, 10);
	cout<<"BEFORE:: ";
	d1.display();
	
//	++d1;
	d1.operator++();
	cout<<"\nAFTER:: ";
	d1.display();
	
	return 0;
}
