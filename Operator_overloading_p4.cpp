// ++prefix operator overloading using friend function
#include<iostream>
using namespace std;

class Demo{
	int a, b;
	public:
		Demo(int x, int y) : a(x), b(y) {
		}
		void display(){
			cout<<"\na: "<<a<<"\nb: "<<b<<endl;
		}
		friend void operator++(Demo &);
};

void operator++(Demo &dx){
	dx.a++;
	dx.b++;
}

int main()
{
	Demo d1(5, 8);
	cout<<"BEFORE:: ";
	d1.display();
	
	operator++(d1);
	
	cout<<"\nAFTER:: ";
	d1.display();
	
	return 0;
}
