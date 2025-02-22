//user defined compare() function using char[]
//Failed for many test cases
#include<iostream>
using namespace std;

int compareString(char str1[20], char str2[20]){
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
	
	//if both are of equal length
	if(str1len == str2len){
		for(int i=0; i < str1len; i++){
			if(str1[i] == str2[i]){
				continue;
			} else if(str1[i] < str2[i]){
				return -1;
			} else{
				return 1;
			}
		}
		return 0;
	} else if(str1len < str2len){
		return -1;
	} else{
		return 1;
	}
}

int main(){
	char str1[20], str2[20];
	cout<<"Enter first string: ";
	cin.getline(str1, 20);
	cout<<"Enter second string: ";
	cin.getline(str2, 20);
	
	if(compareString(str1, str2) == 0){
		cout<<endl<<"Both are equal";
	} else if(compareString(str1, str2) < 0){
		cout<<endl<<"string 1 is smaller";
	} else{
		cout<<endl<<"string 2 is smaller";
	}
	return 0;
}
