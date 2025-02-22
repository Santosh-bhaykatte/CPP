#include<iostream>
#include<cstring>
using namespace std;

/*
//passing char array as pointer to function
void printString(const char* str){
	cout<<"string recieved: "<<str<<endl;
	char* ptr = new char[strlen(str)+1];
	strcpy(ptr, str);
	cout<<ptr<<endl;
	cout<<(void*)ptr<<endl;
	cout<<(void*)str<<endl;
}
*/

/*
//passing char array as pointer to function & modifying it
void modifyString(char* str){
	strcpy(str, "Modified");
}
*/

int main()
{
	char str[100];
	cout<<"Enter string: ";
	cin.getline(str, 100);
	
	/*
	printString(str); //passing char array(C-style string) to function
	cout<<&str<<endl;
	*/
	
	/*
	cout<<"Before: "<<str<<endl;
	modifyString(str);
	cout<<"After: "<<str<<endl;
	*/
	
	return 0;
}
