//creating objects of class in function other than main()

#include<iostream>
using namespace std;

class MyClass{
	public:
		MyClass(){
			cout<<"Object created!"<<endl;
		}
		~MyClass(){
			cout<<"Object destroyed!"<<endl;
		}
		void display(){
			cout<<"Hello From MyClass!"<<endl;
		}
};

//function to create object of MyClass
void createObject(){
	MyClass obj;		//auto storage duration, local to function
	obj.display();
}
//object is destroyed when it goes out of scope. It can not persist beyond function

int main()
{
	cout<<"Inside main(): func"<<endl;
	createObject();			//call createObject();
	return 0;
}
