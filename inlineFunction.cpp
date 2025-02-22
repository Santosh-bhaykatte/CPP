//inline function
#include<iostream>
using namespace std;

inline float square(float x){
	return x*x;
}

int main()
{
	cout<<"Square of 4.5: "<<square(4.5)<<endl;
	return 0;
}
