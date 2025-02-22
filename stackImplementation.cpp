 //stack implementation using array	- generic code
#include<iostream>
using namespace std;

class Stack{
	int top;
	int* stack;
	int size;
	public:
		Stack(int size){
			top = -1;
			stack = new int[size];		//dynamically allocate memory for stack
			this->size = size;
		}
		~Stack(){
			delete[] stack;			//avoid memory leakage
			stack = NULL;
		}
		void push(int);
		void pop();
		void display();
		void peek();
		void menu();
};

void Stack::push(int val){
	if(top == size-1){
		cout<<"\nStack Overflow...."<<endl;
		return;
	}
	stack[++top] = val;
	cout<<"\nElement pushed At index "<<top<<" : "<<stack[top]<<endl;
}

void Stack::pop(){
	if(top == -1){
		cout<<"\nStack Underflow...."<<endl;
		return;
	}
	int ele = stack[top--];
	cout<<"\nPopped successfully!"<<endl;
}

void Stack::peek(){
	if(top == -1){
		cout<<"\nStack Underflow..."<<endl;
		return;
	}
	cout<<"\nElement peeked : "<<stack[top]<<endl;
}

void Stack::display(){
	if(top == -1){
		cout<<"\nStack underflow..."<<endl;
		return;
	}
	cout<<"\nElements in stack : ";
	for(int i=0; i<=top; ++i){
		cout<<stack[i]<<" ";
	}
}

void Stack::menu(){
	cout<<"\n------------------------------------------\n";
	cout<<"\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
	int choice;
	cout<<"\nEnter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:
			int val;
			cout<<"\nEnter element to push : ";
			cin>>val;
			push(val);
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			cout<<"\nExiting from Application....\n";
			cout<<"Thank you!"<<endl;
			return;
		default:
			cout<<"\nInvalid Input!.."<<endl;
	}
	menu();		//recursive call
}

int main()
{
	int n;
	cout<<"Enter stack size : ";
	cin>>n;
	Stack s(n);
	s.menu();	//call to menu()
	
	return 0;
}
