//classes & objects
#include<iostream>
using namespace std;

class Car{
	public:
		string brand;
		int year;
		
		void displayInfo();
};

void Car::displayInfo(){
	cout<<"Brand : "<<brand<<", year : "<<year<<endl;
}

int main()
{
	Car car1;
	car1.brand = "Honda";
	car1.year = 2021;
	car1.displayInfo();
	
	return 0;
}
