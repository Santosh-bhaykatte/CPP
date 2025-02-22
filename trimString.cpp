//implementation of trim()
#include<iostream>
using namespace std;

class StringEx{
	string oldStr; //original string
	public:
		StringEx(string name) : oldStr(name){}
		string trimString();
};

string StringEx::trimString(){
	string newStr; //new string
	for(int i=0; i < oldStr.length(); i++){
		if(oldStr[i] != '_'){
			newStr += oldStr[i];
		}
		if(oldStr[i] != '_' && oldStr[i+1] == '_'){
			break;
		}
	}
	return newStr;
}

int main(){
	string name;
	cout<<"Enter string with _ for leading & trailing spaces: ";
	cin>>name;
	
	StringEx s1(name);
	
	cout<<"\nNew string: "<<s1.trimString();
	return 0;
}
