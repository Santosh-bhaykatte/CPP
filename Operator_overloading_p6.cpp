//overload ! operator to change case of each alphabet in string
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

class Demo{
	char* str;
	public:
		Demo(const char* oldstr){
			str = new char[strlen(oldstr)+1];
			strcpy(str, oldstr);
		}
		void display(){
			cout<<str<<endl;
		}
		void operator!();
};

/*
void Demo::operator!(){
	for(int i=0; str[i] != '\0'; ++i){
		if(str[i] >= 65 && str[i] <= 90){
			str[i] = str[i] + 32;
		} else if(str[i] >= 97 && str[i] <= 122){
			str[i] = str[i] - 32;
		}
	}
}
*/

void Demo::operator!(){
	for(int i=0; str[i] != '\0'; ++i){
		if(islower(str[i])){
			str[i] = toupper(str[i]);
		} else{
			str[i] = tolower(str[i]);
		}
	}
}

int main()
{
	char* oldstr = new char[50];
	cout<<"Enter string: ";
	cin.getline(oldstr, 50);
	
	Demo d(oldstr);
	delete[] oldstr;
	
	cout<<"\nBEFORE:: ";
	d.display();
	
//	!d;
	d.operator!();

	cout<<"\nAFTER:: ";
	d.display();
		
	return 0;
}
