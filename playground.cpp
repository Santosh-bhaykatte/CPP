#include<iostream>
#include<cstring>
using namespace std;

char* allocateString(){
	char str[] = "Hello";
	return str;
}

char* allocateStringHeap(){
	char* str = new char[6];
	strcpy(str, "Hello");
	cout<<(void*)str<<endl;
	return str;
}

int main()
{
	char *ptr = allocateStringHeap();
	cout<<ptr<<endl;
	cout<<(void*)ptr<<endl;
	
	cout<<allocateString()<<endl;
	
	return 0;
}
