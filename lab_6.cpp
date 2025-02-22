// lab 6 - constructors
#include<iostream>
using namespace std;

class Student{
	string name;
	int age;
	static int cnt;
	public:
		//default
		Student(){
			name = "Unknown";
			age = 0;
			++cnt;
		}
		//parameterized
		Student(string name, int age) : name(name), age(age){
			++cnt;
		}
		//copy
		Student(const Student& s){
			this->name = s.name;
			this->age = s.age;
			++cnt;
		}
		static int getCount(){
			return cnt;
		}
		void display(){
			cout<<"Name: "<<name<<"\tAge: "<<age<<endl;
		}
};

int Student::cnt = 0;

int main()
{
	Student s1;
	s1.display();
	
	Student s2("Tony", 54);
	s2.display();
	
	Student s3 = s2;
	s3.display();
	
	cout<<"\nTotal Students: "<<Student::getCount();
		
	return 0;
}
