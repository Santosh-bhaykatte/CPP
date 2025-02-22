/* 
3. extern -
	scope: global (can be accessed across files)
	
	lifetime: exists throughout the program's lifetime
	
	usage:
		1. avoids duplication of global variables
		2. used to access global variable that is defined in another file
*/
#include<iostream>
using namespace std;

extern int globalVar;	//declaration of global variable

int main()
{
	cout<<globalVar<<endl;
	return 0;
}
