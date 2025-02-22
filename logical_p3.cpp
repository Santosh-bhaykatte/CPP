//input three names using char array
#include<iostream>
using namespace std;

//global
const int MAX = 3;

int main()
{
	char arr[MAX][100];
	
	//input three names
	for(int i=0; i<MAX; ++i){
		scanf("%s", &arr[i]);
	}
	//print
	for(int i=0; i<MAX; ++i){
		printf("%s\n", arr[i]);
	}
	
	return 0;
}
