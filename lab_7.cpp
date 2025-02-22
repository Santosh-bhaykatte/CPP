// lab 7 - this pointer
#include<iostream>
using namespace std;

class Person{
	string name;
	int age;
	public:
		Person(string name, int age){
			this->name = name;
			this->age = age;
		}
		void display(){
			cout<<name<<", you are "<<age<<" years old\n";
		}
};

int main()
{
	Person p("Bob", 45);
	p.display();
	
	return 0;
}
