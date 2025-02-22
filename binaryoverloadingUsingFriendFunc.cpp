//binary operator + overloading using friend function
#include<iostream>
using namespace std;

class Demo{
	int a, b;
	public:
		Demo() : a(0), b(0) {
		}
		Demo(int x, int y) : a(x), b(y) {
		}
		void show(){
			cout<<"\na: "<<a<<"\nb: "<<b<<endl;
		}
		friend Demo operator+(const Demo &, const Demo &);
};

Demo operator+(const Demo &dx, const Demo &dy){
	return Demo(dx.a + dy.a, dx.b + dy.b);
}

int main()
{
	Demo d1(2, 3);
	Demo d2(5, 6);
	cout<<"Contents of d1 - ";
	d1.show();
	cout<<"\nContents of d2 - ";
	d2.show();
	
//	Demo d3 = d1 + d2;
	Demo d3 = operator+(d1, d2);
	
	cout<<"\nContents of d3 - ";
	d3.show();
		
	return 0;
}
