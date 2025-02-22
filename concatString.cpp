//User defined concat() function using string
#include<iostream>
using namespace std;

string concatStr(string str1, string str2){
	string newStr = str1;
	newStr.append(str2);
	return newStr;
}

int main(){
	string str1, str2;
	cout<<"Enter first string: ";
	getline(cin, str1); // reads string with spaces
	cout<<"Enter second string: ";
	getline(cin, str2);
	
	cout<<"\nConcatenated String: "<<concatStr(str1, str2);
	return 0;
}
