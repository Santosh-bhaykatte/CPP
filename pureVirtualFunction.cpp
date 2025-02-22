/* --------------- pure virtual function ------------

# function declared in base class with no definition.

# class containing at least one pure virtual function is called as abstract class

# derived classes must provide their own implementation of pure virtual function. Otherwise they
also become abstract classes

# enforces runtime polymorphism

# declared in base class by assigning with 0
*/

#include<iostream>
using namespace std;

//abstract base class
class Animal{
	public:
		virtual void makeSound() = 0;		//pure virtual function
		
		// non-virtual function in abstract class
		void desc(){
			cout<<"Animals are living beings"<<endl;
		}
};

class Dog : public Animal{
	public:
		void makeSound(){
			cout<<"Dog barks"<<endl;
		}
};

class Cat : public Animal{
	public:
		void makeSound(){
			cout<<"Cat meows"<<endl;
		}
};

int main()
{
//	Animal a;		//cannot instantiate abstract class
	Dog d;
	Cat c;
	
	d.makeSound();
	c.makeSound();
	
	//access base class non-virtual function
	d.desc();
	c.desc();
	
	//Runtime polymorphism : base class pointer to call derived class methods
	Animal* aptr = &d;
	aptr->makeSound();
	
	aptr = &c;
	aptr->makeSound();
	
	return 0;
}
