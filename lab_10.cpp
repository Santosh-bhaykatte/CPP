// lab - 10  virtual function & method overriding
#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
			cout<<"Animal makes sound\n";
		}
};

class Dog : public Animal {
	public:
		void sound(){
			cout<<"Dog barks\n";
		}
};

class Cat : public Animal {
	public:
		void sound(){
			cout<<"Cat meows\n";
		}
};

int main()
{
	Animal* aptr = new Dog();
	aptr->sound();
	
	aptr = new Cat();
	aptr->sound();
	
	aptr = new Animal();
	aptr->sound();
	
	delete aptr;
	
	return 0;
}
