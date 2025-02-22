//passing string literal to function
#include<iostream>
#include<cstring>
using namespace std;

//function to print message
void printMessage(const char* str){
	cout<<str<<endl;
}

int main()
{
	char* str = new char[strlen("Hello") + 1]; //allocate 6 bytes on heap
	strcpy(str, "Hello"); //copy "Hello" to str
	
	printMessage("Hello"); //call by passing string literal
	printMessage(str); //call by passing dynamic array
	
	delete[] str;
	
	return 0;
}
