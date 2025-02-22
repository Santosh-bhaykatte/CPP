/*------------Virtual function------------

# A function in base class declared using virtual keyword. virtual function is meant to be
overridden by derived classes enabling run-time polymorphism 

# base class pointer is used to call derived class version of function

# function called is determined by type of object pointed to by base class pointer at runtime

# derived class can provide it's own implementation of virtual function

*/

#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
			cout<<"Animal makes sound"<<endl;
		}
};

class Dog : public Animal{
	int a;
	public:
		void sound(){					//overriding virtual function in child class
			cout<<"Dog barks"<<endl;
		}
};

class Cat : public Animal{
	int b;
	public:
		void sound(){
			cout<<"Cat meows"<<"\n";
		}
};

int main()
{
	Animal *aptr = new Dog();  		//base class pointer to derived class object
	aptr->sound();
	
	delete aptr;	//memory for Dog object freed
	
	aptr = new Cat();
	aptr->sound();
	
	delete aptr;	//memory for Cat object freed
	return 0;
}
