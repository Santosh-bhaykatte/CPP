//Enhancements
//1. number of records fetched
//2. check lowercase if not convert it
//3. use recursion where possible


#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstring>
#include<string.h>
using namespace std;

class Student
{
	int roll;
	string name, city;
	float percent;
	
	public:
		void getData();
		void printData();
		void static dispRecord(Student[], int, string);
		void static dispRecord(Student[], int, float);
		void static fetchRecordsByCity(Student[], int);
		void static fetchRecordsByPercent(Student[], int);
};

void Student::getData()
{
	cout<<"\nEnter Roll No.: ";
	cin>>roll;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Percentage: ";
	cin>>percent;
	cout<<"Enter City: ";
	cin>>city;
	return;
}

void Student::printData()
{
	cout<<setw(10)<<left<<roll<<setw(10)<<left<<name<<setw(10)<<left
	<<percent<<setw(10)<<left<<city<<endl;
	return;
}

//city basis fetch
void Student::dispRecord(Student stu[], int n, string SearchCity)
{
	cout<<"\n\n---------Students Records---------\n\n";
	cout<<"\n"<<setw(10)<<left<<"ROLL"<<setw(10)<<left<<"NAME"<<
	setw(10)<<left<<"PERCENT"<<setw(10)<<left<<"CITY\n"<<endl;
	
	for(int i=0; i<SearchCity.length(); ++i){
		SearchCity[i] = tolower(SearchCity[i]);
	}
	
	int res;
	bool isTrue = false;
	for(int i=0; i<n; ++i){
		
		string temp = stu[i].city;
		for(int j=0; j<temp.length(); ++j){
			temp[j] = tolower(temp[j]);
		}
		
		res = temp.compare(SearchCity);
		if(res == 0){
			stu[i].printData();
			isTrue = true;
		}
	}
	if(!isTrue){
		cout<<"\nNo Record Found!";
	}
}

//percentage basis fetch
void Student::dispRecord(Student stu[], int n, float searchPercent)
{
	cout<<"\n\n---------Students Records---------\n\n";
	cout<<"\n"<<setw(10)<<left<<"ROLL"<<setw(10)<<left<<"NAME"<<
	setw(10)<<left<<"PERCENT"<<setw(10)<<left<<"CITY\n"<<endl;
	 
	int res;
	bool isTrue = false;
	for(int i=0; i<n; ++i){
		if(stu[i].percent == searchPercent){
			stu[i].printData();
			isTrue = true;
		}
	}
	if(!isTrue){
		cout<<"\nNo Record Found!";
	}
}

void Student::fetchRecordsByCity(Student s[], int n)
{
	string city;
	cout<<"\n\nEnter city to fetch record: ";
	cin>>city;
	
	int choice;
	do
	{
		Student::dispRecord(s, n, city);
		
		cout<<"\n----------------------------------";
		cout<<"\n\nWant to fetch more records? press 1 Else press 0: ";
		cin>>choice;
		
		if(choice){
			cout<<"\n\nEnter city to fetch record: ";
			cin>>city;
		}
	}while(choice);
}

void Student::fetchRecordsByPercent(Student s[], int n)
{
	float pcent;
	cout<<"\n\nEnter percentage to fetch record: ";
	cin>>pcent;
	
	int choice;
	do
	{
		Student::dispRecord(s, n, pcent);
		
		cout<<"\n----------------------------------";
		cout<<"\n\nWant to fetch more? press 1 Else press 0: ";
		cin>>choice;
		
		if(choice == 1){
			cout<<"\n\nEnter percentage to fetch record: ";
			cin>>pcent;
		}
	}while(choice);
}

void inputOption(Student s[], int n)
{
	int op;
	cout<<"\nInput Your option: ";
	cin>>op;
	cout<<"\n----------------------------------";
	
	switch(op){
		case 1:
			Student::fetchRecordsByCity(s, n);
			break;
		
		case 2:
			Student::fetchRecordsByPercent(s, n);
			break;
			
		default:
			cout<<"\n\nInvalid! Please, Enter valid option\n";
			inputOption(s, n);
	}
}

int main(void)
{
	int n;
	cout<<"How many students records you want? - ";
	cin>>n;
	Student s[n]; //variable length array of Student objects
	
	//Input Records
	cout<<"\n-------ENTER STUDENT DETAILS-------";
	for(int i=0; i<n; ++i){
		cout<<"\n\nEnter Details Of Student "<<i+1<<endl;
		s[i].getData();
		system("cls");
		cout<<"\nRecord "<<(i+1)<<" Added Successfully!";
	}
	system("cls");
	
	//Display Records
	cout<<"\n-------STUDENT'S DATABASE:--------\n\n";
	cout<<"\n"<<setw(10)<<left<<"ROLL"<<setw(10)<<left<<"NAME"<<
	setw(10)<<left<<"PERCENT"<<setw(10)<<left<<"CITY\n"<<endl;
	
	for(int i=0; i<n; ++i){
		s[i].printData();
	}
	
	//Fetch Records
	cout<<"\n----------------------------------";
	cout<<"\n\nOn What basis you want to fetch records?\n";
	cout<<"\n1. CITY"<<endl;
	cout<<"2. PERCENT"<<endl;
	
	inputOption(s, n);
	
	return 0;
}

