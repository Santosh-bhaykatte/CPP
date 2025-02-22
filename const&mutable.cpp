// use of const & mutable keyword
#include<iostream>
using namespace std;

class MyClass{
	mutable int data;
	public:
		MyClass(int x) : data(x){
		}
		int getData() const{
//			data = 10;
			return data;
		}
		void setData(int val) const{
			data = val;
		}
};

int main()
{
	MyClass obj(10);
	cout<<obj.getData()<<endl;
	obj.setData(20);
	cout<<obj.getData()<<endl;
	
	return 0;
}
