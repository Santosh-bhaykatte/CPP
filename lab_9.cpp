// lab - 9  operator overloading
// (--) prefix using member function 
// (++) postfix using friend function

#include<iostream>
using namespace std;

class Demo{
	int a, b;
	public:
		Demo(int a, int b) : a(a), b(b){
			
		}
		void operator--();
		friend void operator++(Demo &, int);
		void display(){
			cout<<"a = "<<a<<"\tb = "<<b<<endl;
		}
};

void Demo::operator--(){
	--a;
	--b;
}

void operator++(Demo &obj, int num){
	obj.a++;
	obj.b++;
	cout<<"\nValue of num : "<<num<<endl<<endl;
}

int main()
{
	Demo d1(5, 8);
	
	//unary --
	--d1;
//	d1.operator--();
	d1.display();

	//++
	operator++(d1, 0);
	d1.display();
	
	return 0;
}
