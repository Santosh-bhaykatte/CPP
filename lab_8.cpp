// lab 8 - multiple inheritance

#include<iostream>
using namespace std;

class Animal{
	public:
		void sound(){
			cout<<"\nAnimal makes sound"<<endl;
		}
};

class Mammal{
	public:
		void breathe(){
			cout<<"Mammal breathes"<<endl;
		}
};

class Dog : public Animal, public Mammal{
	public:
		void sound(){
			cout<<"Dog barks\n";
		}
		void breathe(){
			cout<<"Dog breathes\n";
		}
};

int main()
{
	Dog d1;
	d1.sound();
	d1.breathe();
	
	d1.Animal::sound();
	d1.Mammal::breathe();
	
	return 0;
}

