//implementation of substring() using char[]
#include<iostream>
#include<cstring>
using namespace std;

class StringEx{
	char oldStr[30]; //original string
	public:
		StringEx(char name[]){
			strcpy(oldStr, name);
		}
		int oldStrLen();
		char* subString(int, int);
};

int StringEx::oldStrLen(){
	int cnt = 0;
	for(int i=0; oldStr[i] != '\0'; i++){
		cnt++;
	}
	return cnt;
}

char* StringEx::subString(int bgIdx, int endIdx){
	char newStr[30];
	int n = oldStrLen();
	
	if(bgIdx >= 0 && endIdx <= n && bgIdx < endIdx){
		int j = 0;
		for(int i = bgIdx; i < endIdx; i++){
			newStr[j] = oldStr[i];
			j++;
		}
		newStr[j] = '\0';
	} else{
		cout<<"Invalid Indices!"<<endl;
	}
	return newStr;
}

int main(){
	char name[30];
	cout<<"Enter old string: ";
	cin.getline(name, 30);
	
	StringEx s1(name);
	
	
	int start, end;
	cout<<"\nEnter start index: ";
	cin>>start;
	cout<<"Enter end index: ";
	cin>>end;
	
	cout<<"\nNew string: "<<s1.subString(start, end);
	
	return 0;
}
