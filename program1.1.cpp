#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstring>
#include<string.h>
using namespace std;

class Student
{
	int roll;
	string name;
	char city[20];
	float percent;
	
	public:
		void getData();
		void printData();
		void static dispRecord(Student[], int, char[]);
};

void Student::getData()
{
	cout<<"\nEnter Roll No.: ";
	cin>>roll;
	
	cout<<"Enter name: ";
	cin>>name;
	
	cout<<"Enter percentage: ";
	cin>>percent;
	
	cout<<"Enter city: ";
	cin>>city;
	
	return;
}

void Student::printData()
{
	cout<<setw(10)<<left<<roll<<setw(10)<<left<<name<<setw(10)<<left
	<<percent<<setw(10)<<left<<city<<endl;
	return;
}

void Student::dispRecord(Student stu[], int n, char comp_city[])
{
	cout<<"\n\n---------Records Feteched---------\n\n";
	
	cout<<"\n"<<setw(10)<<left<<"ROLL"<<setw(10)<<left<<"NAME"<<
	setw(10)<<left<<"PERCENT"<<setw(10)<<left<<"CITY\n"<<endl;
	
//	for(int i=0; i<comp_city.length(); ++i){
//		comp_city[i] = tolower(comp_city[i]);
//	}
	
	int res;
	bool isTrue = false;
	for(int i=0; i<n; ++i){
		
//		string temp = stu[i].city;
//		for(int j=0; j<temp.length(); ++j){
//			temp[j] = tolower(temp[j]);
//		}
		cout<<"TEST1\n";
		res = stricmp(stu[i].city, comp_city);
		cout<<"TEST2=="<<res<<endl;
		if(res == 0){
			stu[i].printData();
			isTrue = true;
		}
	}
	cout<<"\n----------------------------------";
	if(isTrue == false){
		//system("cls");
		cout<<"\nNo Record Found!";
	}
}

int main(void)
{
	int n;
	cout<<"How many students records you want? - ";
	cin>>n;
	Student s[n];
	
	//call inputData()
	cout<<"\n-------ENTER STUDENT DETAILS-------";
	for(int i=0; i<n; ++i){
		cout<<"\n\nEnter Details Of Student "<<i+1<<endl;
		s[i].getData();
		system("cls");
		cout<<"\nRecord "<<(i+1)<<" Added Successfully!";
	}
	system("cls");
	
	//call printData()
	cout<<"\n-------STUDENT'S DATABASE:--------\n\n";
	cout<<"\n"<<setw(10)<<left<<"ROLL"<<setw(10)<<left<<"NAME"<<
	setw(10)<<left<<"PERCENT"<<setw(10)<<left<<"CITY\n"<<endl;
	
	for(int i=0; i<n; ++i){
		s[i].printData();
	}
	
	//call dispRecord()
	char city[10];
	cout<<"\n\nEnter city to fetch record: ";
	cin.ignore();
	cin.getline(city, 10);
	do
	{
		Student::dispRecord(s, n, city);
		cout<<"\n\nWant to fetch more records? press 1 Else press 0: ";
		int choice;
		cin>>choice;
		if(choice == 1){
			cout<<"\n\nEnter city to fetch record: ";
			cin>>city;
		}else{
			break;
		}
	}while(true);
	
	return 0;
}

