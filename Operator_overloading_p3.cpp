// ++ postfix operator overloading using non-static member function
#include<iostream>
using namespace std;

class Demo{
	int a, b;
	public:
		Demo(int x, int y) : a(x), b(y){
		}
		void display(){
			cout<<"\na: "<<a<<"\nb: "<<b<<endl;
		}
		void operator++(int);
};

void Demo::operator++(int num){
	a++;
	b++;
	cout<<"\nvalue of num: "<<num<<endl;
}

int main()
{
	Demo d1(4, 8);
	cout<<"BEFORE:: ";
	d1.display();
	
//	d1++;
	d1.operator++(99);
	cout<<"\nAFTER:: ";
	d1.display();
	
	return 0;
}
