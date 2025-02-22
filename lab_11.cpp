// lab - 11
// pure virtual function
#include<iostream>
using namespace std;

class Shape{
	public:
		virtual double calcArea() = 0;
};

class Circle : public Shape{
	double rad;
	public:
		Circle(double rad) : rad(rad){
			
		}
		double calcArea(){
			return 3.14*rad*rad;
		}
};

class Square : public Shape{
	double side;
	public:
		Square(double side) : side(side){
			
		}
		double calcArea(){
			return side*side;
		}
};

int main()
{
	double rad, side;
	
	cout<<"Enter radius of circle: ";
	cin>>rad;
	
	Shape* ptr = new Circle(rad);
	cout<<"\nArea of Circle : "<<ptr->calcArea()<<endl;
	
	cout<<"\n----------------------------\n";
	cout<<"\nEnter side of square: ";
	cin>>side;
	
	ptr = new Square(side);
	cout<<"\nArea of Square : "<<ptr->calcArea()<<endl;
	
	delete ptr;
	
	return 0;
}
