/*hybrid inheritance

Base class: Person
Attributes: Name, Age
Methods: Display personal details

Derived class 1: Student (inherits Person)
Attributes: Roll Number, Marks
Methods: Display student details

Derived class 2: Employee (inherits Person)
Attributes: Employee ID, Salary
Methods: Display employee details

Derived class 3: TeachingAssistant (inherits both Student and Employee)
Attributes: Subject
Methods: Display teaching assistant details

*/

#include<iostream>
#include<iomanip>
using namespace std;

class Person{
	string name;
	int age;
	public:
		Person(string name, int age){
			this->name = name;
			this->age = age;
		}
		void getDetails(){
			cout<<left<<setw(10)<<name<<left<<setw(10)<<age;
		}
		void display();
};

class Student : public Person{
	int roll;
	double marks;
	public:
		Student(string name, int age, int roll, double marks) : Person(name, age){
			this->roll = roll;
			this->marks = marks;
		}
		void display();
};

void Student::display(){
	cout<<left<<setw(10)<<"NAME"<<left<<setw(10)<<"AGE"<<left<<setw(10)<<"ROLL"
	<<left<<setw(10)<<"MARKS"<<endl<<endl;
	getDetails();
	cout<<left<<setw(10)<<roll<<left<<setw(10)<<marks<<endl;
}

int main()
{
	Student s("santosh", 21, 61, 97.37);
	s.display();
		
	return 0;
}
