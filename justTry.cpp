#include<iostream>
using namespace std;

int main()
{
	int x = 50;
    int &y = x;
    
    //undefined behavior
    std::cout<<x<<" "<<--y<<endl;
	
	return 0;
}
