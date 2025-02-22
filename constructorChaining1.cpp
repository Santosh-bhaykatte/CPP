/*
# constructor chaining refers to the process of calling one constructor from another constructor
within the same class or between derived class and base class

# It ensures reusability of code by allowing one constructor to initialize the class partially, 
while the other completes the initialization.

*/
#include<iostream>
using namespace std;

class Person{
	string name;
	int age;
	public:
		Person() : Person("Unknown", 0) {
			cout<<"Default constructor called"<<endl;
		}
		Person(string name, int age) : name(name), age(age) {
			cout<<"parameterized constructor called"<<endl;
		}
		void print() const{
			cout<<"Name: "<<name<<", Age: "<<age<<endl;
		}
};

int main()
{
	Person p1;
	p1.print();
	
	Person p2("Tony", 54);
	p2.print();
	
	return 0;
}
