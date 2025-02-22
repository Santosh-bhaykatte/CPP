//compare strings using pointers
//dynamically allocate memory 
//avoid memory wastage
//without using strcmp()
#include<iostream>
#include<cstring>
using namespace std;

int compareString(const char* str1, const char* str2)
{
	/*
	//Approach 1
	int str1len = strlen(str1);
	int str2len = strlen(str2);
	int min = (str1len < str2len) ? str1len : str2len;
	
	//loop to check lexicographically
	for(int i = 0; i < min; i++){
		if(str1[i] != str2[i]){
			return (str1[i] > str2[i]) ? 1 : -1;
		}
	}
	
	return (str1len > min) ? 1 : (str2len > min) ? -1 : 0;
	*/
	
	//------------------------------------------
	
	//Approach 2
	
	//loop until either string reaches '\0'
	while(*str1 && *str2){
		if(*str1 != *str2){  //check if characters are diffrent
			return (*str1 > *str2) ? 1 : -1;
		}
		++str1; //move to next character
		++str2;
	}
	 
	//all characters are equal then, check for length
	if(*str1)
		return 1;
	if(*str2)
		return -1;
	
	return 0;
}

int main()
{
	char* str1 = new char[50];
	char* str2 = new char[50];
	
	cout<<"Enter first string: ";
	cin.getline(str1, 50);
	
	cout<<"Enter second string: ";
	cin.getline(str2, 50);
	
	//resize array to save memory
	char* resizedStr1 = new char[strlen(str1)+1];
	char* resizedStr2 = new char[strlen(str2)+1];
	
	//copy original string to resized array
	strcpy(resizedStr1, str1);
	strcpy(resizedStr2, str2);
	
	//deallocate unused memory
	delete[] str1;
	delete[] str2;
	
	//reassign str1, str2 to point to new allocated memory
	str1 = resizedStr1;
	str2 = resizedStr2;
	
	//result of comparision
	int result = compareString(str1, str2);
	
	if(result == 1){
		cout<<"String 1 is larger"<<endl;
	}else if(result == -1){
		cout<<"String 1 is smaller"<<endl;
	}else{
		cout<<"Both are equal"<<endl;
	}
	
	//deallocate memory
	delete[] resizedStr1;
	delete[] resizedStr2;
	
	return 0;
}
