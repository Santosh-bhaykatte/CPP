/*
# references - reference variable is an alias for an existing variable

# It acts as another name for an existing variable

# It can not exist independently

# It must be intialized with an existing variable at time declaration

# once a reference is created for a variable then, it can not be changed to refer another variable

# references are immutable

# syntax - data_type &ref_var = original_var; 	//& is used to declare reference variable

# we can create multiple references for the same variable

# No Separate Memory - reference var shares same memory address as the variable it refers

# Uses - 
	1. parameters passing - commonly used to avoid overhead of copying data
	
	2. return multiple values - can modify multiple variables within function
	
	3. function overloading & operator overloading
	
	4. memory efficiency - handling large data objects

*/
#include<iostream>
using namespace std;

/*
void addTen(int &);

void addTen(int &x){
	x += 10;
}
*/

/*
void display(int a){
	cout<<"pass by value : "<<a<<endl;
}

void display(int &a){
	cout<<"pass by reference : "<<a<<endl;
}
*/

void print(const int &a){			//const reference
	cout<<"const reference"<<endl;
}

void print(int& a){					//non const reference
	cout<<"non const reference"<<endl;
}

int main()
{
	int num = 10;
	int &ref = num;
	
//	cout<<"original value: "<<num<<endl;
//	cout<<"reference value: "<<ref<<endl;
	
//	ref += 90; //modify reference
	
//	cout<<"\nModified value: "<<num<<endl;
//	cout<<"Modified reference value: "<<ref<<endl;

//	addTen(num);
//	cout<<num<<endl;
	
	/*
	int a = 20;
	display(a);		//call by reference
	display(30);	//call by value
	*/
	
	/*
	int a = 10;
	const int b = 20;
	print(a);
	print(b);
	*/
		
	return 0;
}	
