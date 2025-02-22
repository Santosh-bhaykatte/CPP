//Write a program that performs the following:

//1. Dynamically allocates an integer array of size 5.
//2. Allows the user to input 5 integers.
//3. Resizes the array to hold 10 integers, and copy the existing values to the new array.
//4. Allows the user to input 5 more integers.
//5. Displays all 10 integers.
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int* num = new int[5]; //dynamically allocate memory for 5 integers
	
	cout<<"Enter 5 numbers: ";
	for(int i=0; i<5; i++){
		cin>>num[i];
	}
	
	int* newNum = new int[10]; //resize array
	
	for(int i=0; i<5; i++){
		newNum[i] = num[i]; //copy existing values to new array
	}
	
	delete[] num; //free original array
	
	num = newNum; //reassign pointer to point to new array
	
	cout<<"Enter 5 more numbers: ";
	for(int i=5; i<10; i++){
		cin>>num[i];
	}
	
	cout<<"you entered: ";
	for(int i=0; i<10; i++){
		cout<<num[i]<<" ";
	}
	
	delete[] newNum; //free resized array
	
	return 0;
}

