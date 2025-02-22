// lab 4 - array of objects
#include<iostream>
#include<iomanip>
using namespace std;

class Student{
	int roll;
	string name;
	public:
		void getDetails();
		void showDetails();
};

void Student::getDetails(){
	cout<<"\nEnter name: ";
	getline(cin, name);
	cout<<"Enter roll: ";
	cin>>roll;
	cin.ignore();
	cout<<"\n";
}

void Student::showDetails(){
	cout<<left<<setw(10)<<name<<left<<setw(10)<<roll<<endl;
}

int main()
{
	Student s[3];
	
	//input
	for(int i=0; i<3; ++i){
		cout<<"Enter Details Of student "<<i+1<<":: \n";
		s[i].getDetails();
	}
	
	//display
	cout<<"\n";
	cout<<left<<setw(10)<<"Name"<<left<<setw(10)<<"Roll"<<endl<<"\n";
	for(int i=0; i<3; ++i){
		s[i].showDetails();
	}
	
	return 0;
}
