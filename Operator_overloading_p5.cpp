// reverse string by overloading ! operator using friend function
#include<iostream>
using namespace std;

class String{
	string name;
	public:
		String(string name) : name(name){
		}
		void display(){
			cout<<name<<endl;
		}
		void operator!();
};

void String::operator!(){
	int n = name.length();
	for(int i=0; i<n/2; ++i){
		char ch = name[i];
		name[i] = name[n-i-1];
		name[n-i-1] = ch;
	}
}

int main()
{
	string name;
	cout<<"Enter string: ";
	getline(cin, name);
	
	String s(name);
	cout<<"\nBEFORE:: ";
	s.display();
	
	!s;
//	s.operator!();
	
	cout<<"\nAFTER:: ";
	s.display();
	
	return 0;
}
