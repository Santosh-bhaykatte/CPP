//using keyword to inherit constructor

#include<iostream>
using namespace std;

class Person{
	protected:
		string name;
		int age;
	public:
		Person(string name, int age) : name(name), age(age){
		}
};

class Student : public Person{
	int roll;
	float marks;
	public:
		using Person::Person;		//inherit base class constructor
		void display(){
			cout<<name<<", you are "<<age<<" years old"<<endl;
		}
};

int main()
{
	Student s("Tony", 21);
	s.display();
	
	return 0;
}
