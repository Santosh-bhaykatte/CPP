// lab 5 - area of rectangle using friend function
#include<iostream>
using namespace std;

class Rectangle{
	double length, breadth;
	public:
		Rectangle(double l, double b) : length(l), breadth(b){
			
		}
		friend double area(Rectangle &);
};

double area(Rectangle &obj){
	return obj.length * obj.breadth;
}

int main()
{
	double length, breadth;
	cout<<"Enter length of rectangle: ";
	cin>>length;
	cout<<"Enter breadth of rectangle: ";
	cin>>breadth;
	
	Rectangle rect(length, breadth);
	
	cout<<"\nArea : "<<area(rect)<<endl;
	
	return 0;
}

