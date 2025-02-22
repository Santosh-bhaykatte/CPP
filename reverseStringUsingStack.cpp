//reverse a string using stack
#include<iostream>
using namespace std;

class Stack{
	char *stack;
	int top;
	int size;
	public:
		Stack(int size){
			top = -1;
			stack = new char[size];
			this->size = size;
		}
		~Stack(){
			delete[] stack;
		}
		void push(char);
		void pop();
		void reverse();
		void display();
		void menu();
};

void Stack::push(char ch){
	if(top == size-1){
		cout<<"\nStack overflow.."<<endl;
		return;
	}
	stack[++top] = ch;
	cout<<endl<<ch<<" inserted into stack."<<endl;
	return;
}

void Stack::pop(){
	if(top == -1){
		cout<<"\nStack underflow.."<<endl;
		return;
	}
	char ele = stack[top--];
	cout<<endl<<ele<<" popped successfully\n";
}

void Stack::reverse(){
	if(top == -1){
		cout<<"\nStack underflow.."<<endl;
		return;
	}
	int n = top+1;
	for(int i=0; i<n/2; ++i){
		char temp = stack[i];
		stack[i] = stack[n-i-1];
		stack[n-i-1] = temp;
	}
	cout<<"\nReversed Successfully!"<<endl;
}

void Stack::display(){
	if(top == -1){
		cout<<"\nStack underflow.."<<endl;
		return;
	}
	cout<<"\nString: ";
	for(int i=0; i<=top; ++i){
		cout<<stack[i];
	}
}

void Stack::menu(){
	cout<<"\n-------------------------------";
	cout<<"\n1. push\n2. pop\n3. reverse\n4. display\n5. exit\n";
	int choice;
	cout<<"\nEnter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			char ch;
			cout<<"\nEnter character to push: ";
			cin>>ch;
			push(ch);
			break;
		case 2:
			pop();
			break;
		case 3:
			reverse();
			break;
		case 4:
			display();
			break;	
		case 5:
			return;	
		default:
			cout<<"\nInvalid input!"<<endl;
			menu();
	}
	menu();
}

int main()
{
	int n;
	cout<<"Enter stack size: ";
	cin>>n;
	Stack s(n);
	s.menu();
	
	return 0;
}
