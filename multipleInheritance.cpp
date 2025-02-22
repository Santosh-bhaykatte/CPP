//multiple inheritance
#include<iostream>
using namespace std;

class Animal{
	int a;
	public:
		Animal(){
			this->a = 10;
			cout<<"Animal constructor called - a: "<<a<<endl;
		}
		~Animal(){
			cout<<"Animal destructor called"<<endl;
		}
		void eat(){
			cout<<"\nAnimal Eats"<<endl;
		}
		void show(){
			cout<<"\nHello From Animal"<<endl;
		}
};

class Mammal{
	int b;
	public:
		Mammal(){
			this->b = 20;
			cout<<"Mammal constructor called - b: "<<b<<endl;
		}
		~Mammal(){
			cout<<"Mammal destructor called"<<endl;
		}
		void breathe(){
			cout<<"Mammal Breaths"<<endl;
		}
		void show(){
			cout<<"\nHello From Mammal"<<endl;
		}
};

class Dog : public Mammal, public Animal{
	int c;
	public:
		Dog(){
			this->c = 30;
			cout<<"Dog constructor called - c: "<<c<<endl;
		}
		~Dog(){
			cout<<"\nDog destructor called"<<endl;
		}
		void bark(){
			cout<<"Dog Barks"<<endl;
		}
};

int main()
{
	Dog d1;
	d1.eat();
	d1.breathe();
	d1.bark();
	d1.Animal::show();
	d1.Mammal::show();
	
	return 0;
}
