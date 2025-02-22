#include<iostream>
using namespace std;

int main(){
	float a, b, c;
	
	cout<<"Enter angle 1: ";
	cin>>a;
	cout<<"Enter angle 2: ";
	cin>>b;
	cout<<"Enter angle 3: ";
	cin>>c;
	
	if(a == b && b == c && a == c){
		cout<<"Equilateral"<<endl;
	} else if(a == b || b == c || a == c){
		cout<<"Isosceles"<<endl;
	} else{
		cout<<"Scalene"<<endl;
	}
	
	return 0;
}
