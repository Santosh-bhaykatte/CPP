/* storage classes in cpp

# define scope, visibility, lifetime & memory location of variables & functions
# specify how & where variables are stored in memory & how they can be accessed

1. auto		- local scope, exists until block is executed
2. static	- local or global scope
3. extern	- global scope, exists throughout the program's lifetime
4. register	- local scope, exists until block is executed
5. mutable	- member of class, exists as long as object exists

1. auto
	Scope: Local to the block in which it is declared.

 	Lifetime: Exists until the block is executed.

	Default for Local Variables: Variables declared inside a function without a storage class 
	are auto by default.

eg. void example(){
		int a = 10;
		auto b = 20;
		cout<<a<<" "<<b<<endl;
	}

2. static
	Scope: Local or global.

	Lifetime: Exists throughout the program's lifetime.

	Key Behavior:
	- A static variable inside a function retains its value between function calls.
	- For global variables, it limits the variable's scope to the file it is declared in.

*/
#include<iostream>

static int glob_var = 10;

void example(){
	static int count = 0;	//retains value across function calls
	std::cout<<++count<<std::endl;
	std::cout<<glob_var++<<std::endl;
}

void globEx(){
	std::cout<<glob_var<<std::endl;
}

int main()
{
	example();
	example();
	globEx();
	
	return 0;
}
