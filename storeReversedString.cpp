//reverse a string & store it in another string
#include<iostream>
#include<cstring>
using namespace std;

const char* revStr(char* str){
	int n = strlen(str); //find the length of string
	char* reversed = new char[n+1]; //allocate memory for reversed string
	
	/*Approach 1
	int i = 0;
	while(i < n/2){
		reversed[i] = str[n-i-1];
		reversed[n-i-1] = str[i];
		++i;
	}
	if(n % 2 != 0) reversed[i] = str[i];
	*/
	
	char* end = str + (n-1); //pointer to the last character of original string
	char* revPtr = reversed; //pointer to traverse reversed string
	
	while(end >= str){
		*revPtr = *end; //copy character from end of input string
		++revPtr;      //move forward in output string
		--end; 		   //move backwards in input string
	}
	*revPtr = '\0'; //add null terminator at end of output string
	
	return reversed;
}

int main()
{
	char* original = new char[50]; //allocate memory on heap
	
	cout<<"Enter string: ";
	cin.getline(original, 50);
	
	char* str = new char[strlen(original)+1];
	strcpy(str, original); //copy original string
	
	delete[] original; //free unused memory
	
	original = str; //reassign original to point to original string
	
	const char* reversed = revStr(original);
	cout<<"Reversed : "<<reversed<<endl;
	
	delete[] original; //free memory for string
	delete[] reversed; //free memory for reversed string
	
	return 0;
}
