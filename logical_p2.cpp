#include<iostream>
#include<cstring>
using namespace std;

void printNames(char* str, int idx){
	//base case: to stop recursive call when '\0' encounters
	if(str[idx] == '\0'){
		return;		//end of string
	}
	
	while(str[idx] != ' ' && str[idx] != '\0'){
		cout<<str[idx];
		++idx;
	}
	cout<<endl;
	
	//skip spaces before next name
	while (str[idx] == ' '){
		++idx;
	}
	
	//recursive call to print next name
	printNames(str, idx);
}

int main()
{
	char* arr = new char[100];
	
	cout<<"Enter three names: ";
	cin.getline(arr, 100);
	
	char* str = new char[strlen(arr)+1];	//exact memory for string to avoid memory wastage
	strcpy(str, arr);
	
	delete[] arr;	//free original array
	
	printNames(str, 0);
	
	delete[] str;	//free copied array
	
	return 0;
}
