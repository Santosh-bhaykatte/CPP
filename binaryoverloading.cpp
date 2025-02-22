//binary operator + overloading using non-static member func
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
			cout<<"a: "<<a<<"\tb: "<<b<<endl;
		}
		Demo operator+(const Demo &);
};

/*
Demo Demo::operator+(const Demo &dx){
	Demo temp;
	temp.a = this->a + dx.a;
	temp.b = this->b + dx.b;
	return temp;
}
*/

/*
Demo Demo::operator+(const Demo &dx){
	a = this->a + dx.a;
	b = this->b + dx.b;
	return *this;
}*/

Demo Demo::operator+(const Demo &dx){
	return Demo(a + dx.a, b + dx.b);
}

int main()
{
	Demo d1(2, 3);
	Demo d2(5, 6);
	cout<<"Contents of d1- ";
	d1.show();
	cout<<"\nContents of d2- ";
	d2.show();
	
	Demo d3 = d1 + d2;
//	Demo d3 = d1.operator+(d2);

	cout<<"\nContents of d3- ";
	d3.show();
		
	return 0;
}
