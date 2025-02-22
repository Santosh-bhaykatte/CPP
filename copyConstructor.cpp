/* 
# copy constructor - is a constructor used to initialize new object as copy of an existing object
# it creates an exact copy of existing object
# it takes reference to an object of same class as parameter --- IMP ---***
# if not defined, constructor provides default one
*/
#include<iostream>
using namespace std;

class Car{
	string brand;
	int year;
	
	public:
		Car(string brand, int year) : brand(brand), year(year) {
			
		}
		
		//copy constructor - takes reference to an object of same class as para
		Car(const Car &c){
			brand = c.brand;
			year = c.year;
		}
		void display(){
			cout<<"Brand : "<<brand<<endl<<"Year : "<<year<<endl;
		}
};

int main()
{
	Car car1("Honda", 2003);
	car1.display();
	
	Car car2(car1); //call copy constructor
//	Car car2 = car1;
	car2.display();
	return 0;
}
