 // ++ postfix operator overloading using friend function
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
		friend void operator++(Demo &, int);
};

void operator++(Demo &dx, int num){
	dx.a++;
	dx.b++;
	cout<<"\nvalue of num: "<<num<<endl;
}

int main()
{
	Demo d1(4, 8);
	cout<<"BEFORE:: ";
	d1.display();
	
	operator++(d1, 0);
	
	cout<<"\nAFTER:: ";
	d1.display();
	
	return 0;
}
