/*pointer - variable that stores memory address of another variable
we can directly access & manipulate memory locations using pointers

syntax - data_type* pointer_name = &var;
type of pointer should be same as type of variable it points to

& - addressOf operator
* - used to declare pointer, also called as(indirection, dereferencing & value_at_address operator

dereferencing a pointer - accessing a value at address stored in pointer

Types :
	1. null pointer - currently not pointing to any valid memory address eg. int* ptr = nullptr;
	
	2. generic pointer - can point to any data type. eg. void* ptr = &num;
		-they can not be directly dereferenced without type casting
		
	3. wild pointer - points to random memory location, contains garbage value, results in undefined
					behaviour. Also called as uninitialized pointer. eg. int* ptr;
		
	4. dangling pointer - points to memory location that has already been freed or deleted.
						eg. int* ptr = new int(5);
							delete ptr;			//now ptr becomes dangling pointer
					//to avoid dangling pointers, after freeing memory initialize it with nullptr
							ptr = nullptr;
							
	5. function pointer - stores address of function & used for calling function dynamically
			syntax - return_type (*pointer_name)(para_list) = func_name;
					pointer_name(); //calling function
					
					
# Dynamic Memory Allocation:
	1. Allocate memory using 'new' and deallocate using 'delete'.
	2. Always deallocate memory to avoid memory leaks.
	
# Pointer-to-Pointer: A pointer can store the address of another pointer.
	int x = 10;
	int* ptr = &x;
	int** double_ptr = &ptr;

# Always initialize pointers to avoid wild pointers.

# Be cautious about type mismatches.

*/

#include<iostream>
using namespace std;

void printHello(){
	cout << "Hello\n";
}

//passing pointer to function
void updateValue(int* ptr){
	*ptr = 20;
}

//return pointer from function  - NOTE: Do not return pointer to local variable
int* returnValue(){
	int* ptr = new int(10);
	return ptr;
}

int main()
{
	/*
	int num = 10;
	int* ptr = &num;
	
	cout<<&ptr<<endl;
	cout<<ptr<<endl;
	cout<<&num<<endl;
	
	int* ptr1 = new int(10);

	cout<<&ptr1<<endl;
	cout<<ptr1<<endl;
	
	delete ptr1;		//dangling pointer
	ptr1 = nullptr;		//null pointer
	
	void* ptr2;			//generic pointer
	
	//function pointer
	void (*func_ptr)() = printHello;
	
	func_ptr();			//call function using pointer
	*/
	
	/*
	//Dynamic memory allocation
	
	int* ptr1 = new int(34);
	delete ptr1;
	ptr1 = nullptr;
	
	int* ptr2 = new int[5];
	char* str = new char[6];	//5 characters + null terminator
	
	delete[] ptr2;
	delete[] str;
	ptr2 = nullptr;
	str = nullptr;
	*/
	
	/*
	//pointer arithmetic (+, -, ++, --)
	int arr[3] = {1, 2, 3};
	cout<<*arr<<endl;
	cout<<*(arr+1)<<endl;
	*/
	
	/*
	int x = 10;
	updateValue(&x); 	//pass by reference
	cout<<x<<endl;
	
	cout<<*(returnValue())<<endl;
	*/
	
	return 0;
}
			
