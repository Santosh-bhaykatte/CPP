//unary operator - overloading using non-static member func
#include<iostream>
using namespace std;

class Demo{
	int a, b, c;
	public:
		Demo(int x, int y, int z) : a(x), b(y), c(z) {
		}
		void display(){
			cout<<"\na: "<<a<<"\nb: "<<b<<"\nc: "<<c<<endl;
		}
		void operator-();
};

void Demo::operator-(){
	a = -a;
	this->b = -this->b;
	(*this).c = -(*this).c;
	return;
}

int main()
{
	Demo d1(6, -9, 21);
	cout<<"BEFORE:: ";
	d1.display();
	
//	-d1;
	d1.operator-();
	cout<<"\nAFTER:: ";
	d1.display();
	
	return 0;
}
