//implementation of replace()
#include<iostream>
using namespace std;

class StringEx{
	string oldStr; //original string
	public:
		StringEx(string name) : oldStr(name){}
		string replace(char, char);
};

string StringEx::replace(char oldChar, char newChar){
	for(int i=0; i<oldStr.length(); i++){
		if(oldStr[i] == oldChar){
			oldStr[i] = newChar;
		}
	}
	string newStr = oldStr;
	return newStr;
}

int main(){
	string name;
	cout<<"Enter old string: ";
	cin>>name;
	
	StringEx s1(name);
	
	char oldCh, newCh;
	cout<<"\nEnter character to replace: ";
	cin>>oldCh;
	cout<<"Enter new character: ";
	cin>>newCh;
	
	cout<<"\nNew string: "<<s1.replace(oldCh, newCh);
	return 0;
}
