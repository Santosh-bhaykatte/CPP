/*

4. register -
	Scope: Local to the block.

	Lifetime: Exists until the block is executed.

	Key Behavior:
		- Suggests to the compiler to store the variable in the CPU register for faster access.
		-  Cannot be used to obtain the variable's address using &
		(as it might not have a memory address).
*/
#include<iostream>
using namespace std;

void example(){
	register int i;		//suggests to store in register
	for(i=0; i<5; ++i){
		cout<<i<<" ";
	}
}

int main()
{
	example();
	return 0;
}
