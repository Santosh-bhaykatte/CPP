//constructor chaining in inheritance
#include<iostream>
#include<iomanip>
using namespace std;

class Person{
	protected:
		string name;
		int age;
	public:
		Person(string name, int age) : name(name), age(age){
		}
};

class Employee{
	protected:
		int empId;
		float salary;
	public:
		Employee(int empId, float salary) : empId(empId), salary(salary){
		}
};

class Manager : public Person, Employee{
	string team;
	string company;
	public:
		Manager(string name, int age, int empId, float salary, string team, string company) :
			Person(name, age), Employee(empId, salary), team(team), company(company){
				
			}
		void display(){
			cout<<left<<setw(8)<<"Name"<<": "<<left<<setw(10)<<name<<endl;
			cout<<left<<setw(8)<<"Age"<<": "<<left<<setw(10)<<age<<endl;
			cout<<left<<setw(8)<<"EmpId"<<": "<<left<<setw(10)<<empId<<endl;
			cout<<left<<setw(8)<<"Salary"<<": "<<left<<setw(10)<<salary<<endl;
			cout<<left<<setw(8)<<"Team"<<": "<<left<<setw(10)<<team<<endl;
			cout<<left<<setw(8)<<"Company"<<": "<<left<<setw(10)<<company<<endl;
		}
};

int main()
{
	Manager m("Shiva", 35, 231, 56000.00f, "Sales", "Google");
	m.display();
	
	return 0;
}
