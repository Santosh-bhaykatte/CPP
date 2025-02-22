// lab - 12
// file handling
#include<iostream>
#include<fstream>
using namespace std;

class Student{
	int roll;
	string name;
	public:
		void writeAndReadFromFile(){
			fstream f("Student.txt", ios::out | ios::in | ios::trunc);
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter roll: ";
			cin>>roll;
			
			if(!f.is_open()){
				cout<<"File opening error..."<<endl;
				return;
			}
			f<<name<<endl<<roll;
			
			cout<<"\nData written to file successfully\n";
			
			f.seekg(0, ios::beg);	//move file pointer to begining
			
			while(!f.eof()){
				getline(f, name);
				cout<<"\nStudent Name: "<<name<<endl;
				f>>roll;
				cout<<"Student Roll: "<<roll<<endl;
				f.ignore();
			}
		}
};

int main()
{		
	Student s;
	s.writeAndReadFromFile();
		
	return 0;
}
