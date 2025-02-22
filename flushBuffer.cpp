#include<iostream>
using namespace std;

int main()
{
	string name;
	int age;
	
	cout<<"Enter age: ";
	cin>>age;
	cin.ignore();	//flush input buffer to discard leftover characters
	
	cout<<"Enter name: ";
	getline(cin, name);
	
	cout<<"\nName: "<<name<<", Age: "<<age<<endl;
	return 0;
}
