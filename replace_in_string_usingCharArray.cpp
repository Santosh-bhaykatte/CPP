//implementation of replace() using char[]
#include<iostream>
#include<cstring>
using namespace std;

class StringEx{
	char oldStr[30]; //original string
	public:
		StringEx(char name[])
		{
			strcpy(oldStr, name);
		}
		char* replace(char, char);
};

char* StringEx::replace(char oldChar, char newChar){
	bool isTrue = false;
	for(int i=0; oldStr[i] != '\0'; ++i){
		if(oldStr[i] == oldChar){
			oldStr[i] = newChar;
			isTrue = true;
		}
	}
	if(!isTrue){
		cout<<"\nInvalid character!\n";
	}
	
	char newStr[30];
	for(int j=0; oldStr[j] != '\0'; j++){
		newStr[j] = oldStr[j];
	}
	return newStr;
}

int main(){
	char name[30];
	cout<<"Enter old string: ";
	cin.getline(name, 30);
	
	StringEx s1(name);
	
	char oldCh, newCh;
	cout<<"\nEnter character to replace: ";
	cin>>oldCh;
	cout<<"Enter new character: ";
	cin>>newCh;
	
	cout<<"\nNew string: "<<s1.replace(oldCh, newCh);
	return 0;
}
