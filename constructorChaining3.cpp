#include<iostream>
using namespace std;

class X{
	protected:
		int a;
	public:
		X(int s) : a(s){
			
		}
};

class Y : public X{
	protected:
		int b, c;
	public:
		Y(int q, int r, int s) : X(s), b(q), c(r){
			
		}
};

class Z : public Y{
	int d;
	public:
		Z(int p, int q, int r, int s) : Y(q, r, s), d(p){
			
		}
		void print(){
			cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<endl;
		}
};

int main()
{
	Z obj(10, 20, 30, 40);
	obj.print();
	
	return 0;
}
