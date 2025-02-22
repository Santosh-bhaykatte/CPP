//Array of objects- an array in which each element is an object
#include<iostream>
using namespace std;

class Student{
	int roll;
	public:
		void setRoll(int roll){
			this->roll = roll;
		}
		void display(){
			cout<<"Student ID: "<<roll<<endl;
		}
};

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	Student stu[n];		//variable length array
	
	//call on each object
	for(int i=0; i<n; ++i){
		stu[i].setRoll(i+1);
	}
	cout<<endl;
	for(int i=0; i<n; ++i){
		stu[i].display();
	}
	
	return 0;
}
