//static queue implementation
#include<iostream>
using namespace std;

class Queue{
	int front;
	int rear;
	int *queue;
	int size;
	public:
		Queue(int size){
			queue = new int[size];
			front = -1;
			rear = -1;
			this->size = size;
		}
		~Queue(){
			delete[] queue;
		}
		void enqueue(int);
		void dequeue();
		void display();
		void menu();
};

void Queue::enqueue(int ele){
	if(rear == size-1){
		cout<<"\nQueue overflow.."<<endl;
		return;
	}
	if(front == -1){
		front = 0;
	}
	queue[++rear] = ele;
	cout<<"\n"<<ele<<" added to queue at index "<<rear<<endl;
}

void Queue::dequeue(){
	if(front == -1 || front > rear){
		cout<<"\nQueue underflow.."<<endl;
		return;
	}
	int ele = queue[front++];
	cout<<"\n"<<ele<<" removed from queue!"<<endl;
}

void Queue::display(){
	if(front == -1 || front > rear){
		cout<<"\nQueue underflow.."<<endl;
		return;
	}
	cout<<"\nQueue:: ";
	for(int i=front; i<=rear; ++i){
		cout<<queue[i]<<" ";
	}
}

void Queue::menu(){
	int choice;
	while(1){
		cout<<"\n------------------------------\n";
		cout<<"\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				int ele;
				cout<<"\nEnter element to add: ";
				cin>>ele;
				enqueue(ele);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				return;
			default:
				cout<<"\nInvalid input\n";			
		}
	}
}

int main()
{
	int n;
	cout<<"Enter queue size: ";
	cin>>n;
	Queue q(n);
	q.menu();
	
	return 0;
}
