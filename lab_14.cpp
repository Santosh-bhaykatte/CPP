// lab - 14 
// exception handling
#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

class InvalidAgeException : public exception{
	string message;
	public:
		InvalidAgeException(const string& msg) : message(msg){
			
		}
		const char* what() const{
			return message.c_str();
		}
};

int main()
{
	int age;
	try{
		cout<<"Enter your age: ";
		cin>>age;
		if(age<0){
			throw InvalidAgeException("Age cannot be negative");
		} else if(age>150){
			throw InvalidAgeException("Age cannot be greater than 150");
		}
		cout<<"Valid Age Entered: "<<age<<endl;
	} catch(const InvalidAgeException& e){
		cout<<"Error: "<<e.what()<<endl;
	}
	
	return 0;
}
