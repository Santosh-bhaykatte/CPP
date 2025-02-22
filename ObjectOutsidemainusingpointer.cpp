//persisting object beyond function scope
//1. use pointer and allocate object dynamically using new
//2. return object
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

MyClass* createObject(){
	MyClass* obj = new MyClass();		//dynamically allocate object
	return obj;			//return pointer to object
}

int main()
{
	cout<<"In main()"<<endl;
	MyClass* myObj = createObject(); 	//receive dynamically allocated object
	myObj->display();
	delete myObj; 		//manually free object
	return 0;
}
