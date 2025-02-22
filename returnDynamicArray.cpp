//return dynamic array from function
#include<iostream>
#include<cstring>
using namespace std;

char* returnArray(){
	char* str = new char[strlen("Hello") + 1];
	strcpy(str, "Hello");
	return str;
}

int main()
{
	char* str = returnArray();
	cout<<str<<endl;
	delete[] str;
	return 0;
}
