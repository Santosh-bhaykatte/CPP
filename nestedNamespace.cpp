// nested namespace
#include<iostream>
using namespace std;

namespace Outer{
	void welcome(){
		cout<<"Hello, from Outer namespace\n";
	}
	namespace Inner{
		void greet(){
			cout<<"Hello, from Inner namespace\n";
		}
	}
}

using namespace Outer::Inner;
//using Outer::greet;
//using Outer::Inner::greet;

int main()
{
//	Outer::Inner::greet();
//	Outer::greet();
	Outer::welcome();
	greet();
	return 0;
}
