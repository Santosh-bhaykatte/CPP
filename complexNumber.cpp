/* -------- operator overloading ---------

# allows redefining functionality of operators to work with user defined types

# operators are used to perform custom operations on objects

# makes code more readable & intuitive
*/
#include<iostream>
using namespace std;

class Complex{
	int real, imag;
	public:
		Complex(int r, int i) : real(r), imag(i){
		}
		Complex operator +(const Complex &c){
			return Complex(real + c.real, imag + c.imag);	//return new object
		}
		void display(){
			cout<<"Real: "<<real<<", Imag: "<<imag<<endl;
		}
};

int main()
{
	Complex c1(2, 3);
	Complex c2(4, 5);
	
	Complex c3 = c1 + c2;
	c3.display();
	
	return 0;
}
