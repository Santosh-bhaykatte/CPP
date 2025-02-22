//single inheritance
#include<iostream>
using namespace std;

class Animal{
	public:
		void sound(){
			cout<<"Animal makes sound\n";
		}
};

class Dog : public Animal{
	public:
		void sound(){
			cout<<"Dog barks\n";
		}
		void eat(){
			cout<<"Dog eats\n";
		}
};

int main()
{
	Dog d;
	d.Animal::sound();
	d.eat();
		
	return 0;
}
