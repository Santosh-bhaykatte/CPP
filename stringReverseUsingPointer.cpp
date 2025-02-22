//reverse a string using pointer notation
//handle strings dynamically & avoid memory wastage
#include<iostream>
#include<cstring>

using namespace std;

//function to reverse a string
void reverseString(char* str)
{
	//reverse string logic
	char* start = str; 					//pointer to first character of string
	char* end = str + strlen(str)-1;	//pointer to last character of string
	
	//swap characters until start meets end
	while(start < end){
		char temp = *start; //temporarily store value at start
		*start = *end;		//copy value from end to start
		*end = temp;		//copy temp value to end
		++start;			//move start forward
		--end;				//move end backward
	}
}

int main()
{
	char* str = new char[100]; //allocate 100 bytes on heap
	cout<<"Enter string: ";
	cin.getline(str, 100); //input from user
	
	char* resizedStr = new char[strlen(str) + 1]; //allocate exact memory for string on heap
	strcpy(resizedStr, str); //copy original string to resizedStr
	
	delete[] str; //free unused memory
	
	if(strlen(resizedStr) > 0){
		reverseString(resizedStr);
		cout<<"Reverse: "<<resizedStr<<endl;
	} else{
		cout<<"Empty string entered.."<<endl;
	}
	
	delete[] resizedStr; //deallocate memory for resizedStr
	
	return 0;
}
