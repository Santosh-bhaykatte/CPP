#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	/*
	const char* input = "Hello World";
	int len = strlen(input);
	char* str = new char[len + 1];
	strcpy(str, input);
	cout<<(void*)str<<endl; //heap memory
	cout<<(void*)input<<endl; //read-only memory
	*/
	
	
	/*
	char str1[] = "Hello World";
	char* str = new char[strlen(str1) + 1];
	strcpy(str, str1);
	cout<<str+1<<endl;
	*/
	
	
	/*
	char str[100];
	cout<<"Enter string: ";
	cin.getline(str, 100);
	
	const char* ptr = str;
	char* str2 = new char[strlen(ptr) + 1];
	strcpy(str2, ptr);
	cout<<str2<<endl;
	cout<<ptr<<endl;
	
	char name[] = "Hello";
	ptr = name;
	cout<<ptr<<endl;
	*/
	
	
	/*
	//dynamic memory allocation in heap
	char* str = new char[100];
	cout<<"Enter string: ";
	cin.getline(str, 100);
	
	char* resizedStr = new char[strlen(str) + 1];
	strcpy(resizedStr, str);
	
	delete[] str; //free initial heap buffer
	str = resizedStr; //reassign str to point to resizedStr
	
	cout<<str<<endl;
	cout<<resizedStr<<endl;
	
	//point to same memory address in heap
	cout<<(void*)str<<endl;
	cout<<(void*)resizedStr<<endl;
	
	delete[] str; //free final memory
	*/
	
	
	/*
	const char* ptr = "Hello";
	ptr[0] = 'h';
	
	char str[] = "World";
	const char* ptr2 = str;
	ptr2 = "Tony"; //allowed
	
	char* const ptr3 = str;
	ptr3 = "Tony"; //Invalid - Error: assignment to read only variable
	ptr3[0] = 'w'; //valid
	
	char* const ptr4 = "Steve";
	ptr4[0] = 's'; //Invalid - Error: assignment to read only location
	ptr4 = str; // Error: assignment to read only variable
	*/
	
	return 0;
}
