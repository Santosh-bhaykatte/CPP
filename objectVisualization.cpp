/*    memory visualization for object
# objects can be allocated memory on stack OR heap depending on how they are created

# actual object - memory for non-static data members

# static members are stored in static memory segment. only one copy exist and shared among 
all objects. Can be accessed using class name only. ClassName::static_var;

# static member functions can access only static data members  ClassName::static_func();

# non static member functions are stored in code segment.

# whenever a non-static member function is invoked on object, this pointer is implicitly passed
to function & function operates on object through this pointer to access member variables

# compiler internally replaces function call obj.func(para) to ClassName::func(&obj, para)

# this pointer points address of current object.

# --------------------------------------------------------------------

# non-static member function -  1. can only be accessed using object
								2. can access non-static data members
								3. can call non-static member function
								4. can access static data members directly
								5. can call static member function directly
								
# static member function - 1. can only be accessed using class name
						   2. can access static data members
						   3. can call static member functions
						   4. can not access non-static data members directly
						   5. can not call non-static member functions directly
						   
						   *To access non-static members we need to pass reference of an object
# ----------------------------------------------------------------------			
 
*/


#include<iostream>
using namespace std;

class MyClass{
	int a;
	static int b;
	public:
		MyClass(int x) : a(x) {
		}
		void show(){					//non-static member function
			cout<<"a: "<<a<<endl;
			cout<<"b: "<<b<<endl;			//access to static member directly
			staticShow();						//call to static member function directly
			cout<<endl;
		}
		static void staticShow();
		static void staticShow(MyClass &);
};

int MyClass::b = 10;						//static data member initialization

void MyClass::staticShow(){
	cout<<"b: "<<b<<endl;
}

void MyClass::staticShow(MyClass &ob){		//static member function definition
	cout<<"b: "<<b<<endl;
	cout<<"a : "<<ob.a<<endl;			//access to non static member through reference of object
	ob.show();							//call to non-static member function through reference
}

int main()
{
	MyClass obj1(2);					//stack allocation for object
	MyClass* obj2 = new MyClass(20);	//heap allocation for object, pointer resides in stack
	
	obj1.show();		//access obj1's memory
	obj2->show();		//access obj2's memory
	
	MyClass::staticShow(obj1);		//call to static method
	
	delete obj2;	//free heap memory
	
	return 0;
}
