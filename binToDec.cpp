#include<iostream>
#include<cmath>
using namespace std;

int binToDec(int);

int main(void)
{
	int num;
	cout<<"Enter binary number: ";
	cin>>num;
	cout<<"Binary of "<<num<<" : "<<binToDec(num);
}

int binToDec(int b)
{
	int bin = 0, i = 0, ld;
	while(b > 0) {
		ld = b % 10;
		bin = bin + (pow(2, i) * ld);
		b = b / 10;
		i++;
	}
	return bin;
}
