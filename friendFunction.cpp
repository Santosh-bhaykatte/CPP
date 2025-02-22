/* ------------ friend function---------------

# A function declared with 'friend' keyword inside a class is friend function

# It is not a member function. 'friend' keyword is just declaration for a class to allow access
to private & protected members of class

# friend functions are allowed to access private & protected members outside a class

# friend function is defined outside class

# friend function takes reference to an object  -<*** IMP

# They help manage access without compromising encapsulation
*/

#include<iostream>
using namespace std;

class Box{
	int length;
	public:
		Box(int len) : length(len) { }
		friend int getLength(Box &);		//friend function declaration
};

//friend function definition
int getLength(Box &b){			//takes reference to an object as parameter
	return b.length;
}

int main()
{
	Box box(10);
	cout<<"Length of box: "<<getLength(box)<<endl;	//call to friend function
	return 0;
}
