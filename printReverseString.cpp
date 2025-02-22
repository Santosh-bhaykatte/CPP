#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[50];
	cout<<"Enter string: ";
	cin.getline(str, 50);
	
	char* ptr = str + (strlen(str)-1); //pointer to last character of string
	
	//iterate until ptr points to first character of string
	while(ptr >= str){
		cout<<*ptr; 	//print char pointed to by ptr
		--ptr;			//move backwards
	}
	
	return 0;
}
