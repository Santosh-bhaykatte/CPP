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

class Dog : public Animal{
	int b;
	public:
		Dog(){
			this->b = 20;
			cout<<"Dog constructor called - b: "<<b<<endl;
		}
		~Dog(){
			cout<<"\nDog destructor called"<<endl;
		}
		void bark(){
			cout<<"Dog Barks"<<endl;
		}
		void show(){
			cout<<"\nHello From Dog"<<endl;
		}
};

class Cat : public Animal{
	int c;
	public:
		Cat(){
			this->c = 30;
			cout<<"Cat constructor called - c: "<<c<<endl;
		}
		~Cat(){
			cout<<"\nCat destructor called"<<endl;
		}
		void meow(){
			cout<<"Cat meows"<<endl;
		}
		void show(){
			cout<<"\nHello From Cat"<<endl;
		}
};

int main()
{
	Dog d1;
	d1.eat();
	d1.bark();
	d1.Animal::show(); //calls Animal's show() method
	
	cout<<endl;
	
	Cat c1;
	c1.eat();
	c1.meow();
	c1.show();
		
	return 0;
}
