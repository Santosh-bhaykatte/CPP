/* 
# Destructor - special member function whose name is same as class & preceded by ~. 
It is used to destroy object when it is no longer needed.
# it is invoked automatically by compiler when an object goes out of scope or explicitly deleted
# It's main purpose is to free up any resources that an object may have acquired during it's
life time like memory, file handles.
# does not have return type
# does not take parameters
# unlike constructors, we can have only one destructor
# destructor can not be overloaded
# release resources - closing files, freeing memory to avoid memory leakage
*/
#include<iostream>
using namespace std;

class Car{
	public:
		Car(){
			cout<<"Car created!"<<endl;
		}
		~Car(){
			cout<<"Car destroyed!"<<endl;
		}
};

int main()
{
	{
		Car car1;
	}
	return 0;
}
