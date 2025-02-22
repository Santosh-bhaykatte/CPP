/*

5. mutable -
	Scope: Member of a class.

	Lifetime: Exists as long as the object exists.

	Key Behavior:
		1. Allows modification of a mutable variable even in a const object.
*/
#include<iostream>
using namespace std;

class Demo{
	mutable int count;
	public:
		Demo() : count(0) {
		}
		void increment() const{
			++count;	//Allowed because 'count' is mutable
		}
		int getCount() const{
			return count;
		}
};

int main()
{
	const Demo obj;
	obj.increment();
	cout<<obj.getCount()<<endl;
		
	return 0;
}
