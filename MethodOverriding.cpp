/* Method overriding

# It is part of run-time polymorphism achieved using virtual function

# allows derived class to provide it's own specific implementation for method that is defined
in base class

# method in base class is made virtual to enable overriding

# base class pointer is used to access overridden method in derived class

# method overriding takes place across the classes

*/
#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
		}
};

class Dog : public Animal{
	public:
		void sound(){					//overriding virtual function in child class
			cout<<"Dog barks"<<endl;
		}
};

int main()
{
	Animal *aptr = new Dog();  		//base class pointer to derived class object
	aptr->sound();
	
	return 0;
}
