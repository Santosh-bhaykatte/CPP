#include<iostream>
using namespace std;

class StringEx{
	string oldStr; //original string
	public:
		StringEx(string name) : oldStr(name){}
		string subString(int, int);
};

string StringEx::subString(int bgIdx, int endIdx){
	string newStr; //new string
	//check indices within bound
	if(bgIdx >= 0 && endIdx <= oldStr.length() && bgIdx < endIdx){
		for(int i = bgIdx; i < endIdx; i++){
			newStr += oldStr[i];
		}
	} else{
		cout<<"Invalid Indices!";
	}
	return newStr;
}

int main(){
	string name;
	cout<<"Enter old string: ";
	cin>>name;
	
	StringEx s1(name);
	
	int start, end;
	cout<<"Enter start index: ";
	cin>>start;
	cout<<"Enter end index: ";
	cin>>end;
	
	cout<<"New string: "<<s1.subString(start, end);
	return 0;
}
