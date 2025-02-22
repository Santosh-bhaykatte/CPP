//unary operator - overloading using friend func
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
		friend void operator-(Demo &);
};

void operator-(Demo &dx){
	dx.b = -(dx.b);
}

int main()
{
	Demo d1(6, -9, 21);
	cout<<"BEFORE:: ";
	d1.display();
	
	-d1;
//	operator-(d1);
	cout<<"\nAFTER:: ";
	d1.display();
	
	return 0;
}
