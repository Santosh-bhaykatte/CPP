#include<stdio.h>

int i = 1;
void printNum()
{
	printf("%d\n", i++);
	if(i <= 10){
		printNum();
	}
}

int main()
{
	printNum();
	return 0;
}
