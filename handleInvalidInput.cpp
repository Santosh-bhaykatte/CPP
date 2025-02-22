//handle invalid inputs
#include<iostream>
using namespace std;

int main()
{
	int n;
	for(int i=0; i<3; ++i){
		cout<<"Enter number: ";
		cin>>n;
//		cin.ignore();
		
		if(cin.fail()){
			cout<<"Invalid input! Please enter an integer\n";
			cin.clear();	//clear error flag
			cin.ignore();	//flush input buffer to discard leftover characters
			--i; //retry current iteration
			continue;
		}
	}
	
	return 0;
}
