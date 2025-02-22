#include<iostream>
#include<cstring>
using namespace std;

const char* getString(const char* str){
	char* ptr = new char[strlen(str)+1]; //allocate memory on heap
	strcpy(ptr, str);
	return ptr;
}

int main()
{
	char str[] = "Hello";
	const char* ptr = getString(str); //get string from function
	//ptr[0] = 'W';
	cout<<ptr<<endl;
	delete[] ptr; //free heap memory
	ptr = "World"; //reassign ptr to string literal
	cout<<ptr<<endl;
	return 0;
}
