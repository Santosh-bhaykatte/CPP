//User defined concat() function using char[]
#include<iostream>
using namespace std;

char* concatString(char str1[20], char str2[20]){
	int str1len, str2len;
	str1len = str2len = 0;
	
	//length of string 1
	for(int i=0; str1[i] != '\0'; i++){
		str1len++;
	}
	//length of string 2
	for(int i=0; str2[i] != '\0'; i++){
		str2len++;
	}
	int newStrlen = str1len + str2len;
	char* newStr = new char[newStrlen + 1]; // +1 for null terminator
	
	//copy string1
	for(int i=0; i<str1len; i++){
		newStr[i] = str1[i];
	}
	//concat string2
	int j = str1len;
	int k = 0;
	while(k < str2len){
		newStr[j] = str2[k];
		j++;
		k++;
	}
	newStr[j] = '\0'; //null terminator
	return newStr; //return pointer to heap allocated memory
}

int main(){
	char str1[20], str2[20];
	cout<<"Enter first string: ";
	cin.getline(str1, 20);
	cout<<"Enter second string: ";
	cin.getline(str2, 20);
	
	char* newStr = concatString(str1, str2);
	cout<<"\nConcated String: "<<newStr;
	
	delete[] newStr; //delete allocated memory
	return 0;
}

