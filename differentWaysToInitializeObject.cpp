//different ways to initialize an object
#include<iostream>
using namespace std;

class Car{
	string brand;
	int year;
	
	public:
		string company;
		
		//default constructor
//		Car(){
//			brand = "Demo";
//			year = 2002;
//			company = "xyz";
//		}
		
		//constructor 1
//		Car(){
//			string brand; int year;
//			cout<<"Enter brand : ";
//			cin>>brand;
//			cout<<"Enter year : ";
//			cin>>year;
//			this->brand = brand;
//			this->year = year;
//			this->company = "Suzuki";
//		}

		//constructor 2
//		Car(string b, int y){
//			brand = b;
//			year = y;
//		}
		
		//constructor 3    : can't initialize state of object
//		Car(string brand, int year = 2023){
//			brand = brand;
//			year = year;
//		}
		
		//constructor 4  
//		Car(string brand, int year){
//			this->brand = brand;
//			this->year = year;
//		}
		
		//constructor 5
//		Car(string, int, string company = "Moto");
		
		//setter with initial values
		void setInfo(){
			brand = "Toyota";
			year = 2004;
			company = "Kirloskar";
		}
		
		//setter & getter with input values
		void getInfo();
		void display();
};

/*
//outside class definition for constructor 5
Car::Car(string brand, int year, string company){
	this->brand = brand;
	this->year = year;
	this->company = company;
}
*/

void Car::getInfo(){
	cout<<"Enter brand : ";
	cin>>brand;
	cout<<"Enter year : ";
	cin>>year;
	cout<<"Enter company : ";
	cin>>company;
}

void Car::display(){
	cout<<"Brand : "<<brand<<endl<<"Year : "<<year<<endl<<"Company : "<<company<<endl;
}

int main()
{
//	Car car1; 				//calls default constructor

//	Car car1("Nexon");		//calls constructor 3
//	car1.company = "TATA";

//	Car car1;				//calls constructor 1
	
//	Car car1("BMW", 2005);	//calls constructor 2
//	car1.company = "Bentley";

//	Car car1("dezire", 2015); //calls constructor 4 : Ambiguous
//	car1.company = "Honda";

//	Car car1("swift", 2013, "Honda"); //calls constructor 5
	
//	Car car1;
//	car1.setInfo();				//calls setInfo() on object

//	Car car1;
//	car1.getInfo();				//calls getInfo()
	
	Car car1;					//prints garbage value
	
	car1.display(); 			//calls display()
	return 0;
}
