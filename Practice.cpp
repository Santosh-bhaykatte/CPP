#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[100];
	cout<<"Enter string: ";
	cin.getline(str1, 100);
	int length = strlen(str1);
	
	char* str = new char[length + 1];
	strcpy(str, str1);
	cout<<str<<endl;
	
	const char* ptr1 = "Hello";
	char* const ptr3 = "Hello";
	
	cout << (void*)ptr1 << endl;  // Print address of "Hello" via ptr1
	cout << (void*)ptr3 << endl;  // Print address of "Hello" via ptr3
	
	delete[] str;
	return 0;
}
