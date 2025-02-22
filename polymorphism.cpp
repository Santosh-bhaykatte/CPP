/*
# polymorphism - many forms

# object oriented programming concept that enables functions/methods to behave diffrently based 
on the context or the data they recieve

# compile time - static/early binding - achieved using method overloading & operator overloading
function behaviour is determined at compile time

# run time - dynamic/late binding - achieved using inheritance and virtual functions

# objects of diffrent types can be accessed through single interface

# base class pointer is used to access derived class objects enabling polymorphic behaviour

# provides flexibility & reusability
*/

#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){					//virtual function
			cout<<"Animal makes sound"<<endl;
		}
};

class Dog : public Animal{
	public:
		void sound(){
			cout<<"Dog barks"<<endl;
		}
};

class Cat : public Animal{
	public:
		void sound(){
			cout<<"Cat meows"<<endl;
		}
};

int main()
{
	Animal *aptr1 = new Dog();	//base class pointer to derived class object
	Animal *aptr2 = new Cat();
	
	aptr1->sound();
	aptr2->sound();
	
	delete aptr1;
	delete aptr2;
	
	return 0;
}
