//static implementation of circular queue
#include<iostream>
using namespace std;

class Queue{
	int* queue, front, rear, size;
	public:
		Queue(int size) : size(size) {
			queue = new int[size];
			front = rear = -1;
		}
		~Queue(){
			delete[] queue;
		}
		void enqueue(int);
		void dequeue();
		void display();
		bool empty();
		void menu();
};

bool Queue::empty(){
	if(front == -1){
		cout<<"\nQueue underflow..."<<endl;
		return true;
	}
	return false;
}

void Queue::enqueue(int ele){
	if(front == (rear+1) % size){
		cout<<"\nQueue is Full"<<endl;
		return;
	}
	if(front == -1){
		front = 0;
	}
	rear = (rear+1)%size;
	queue[rear] = ele;
	cout<<"\n"<<ele<<" added to queue at index "<<rear<<endl;
}

void Queue::dequeue(){
	if(empty()) return;
	int ele = queue[front];
	cout<<"\n"<<ele<<" removed from queue"<<endl;
	
	if(front == rear){		// if front == rear then, set front & rear to -1
		front = rear = -1;
		return;
	}
	
	front = (front+1)%size;
}

void Queue::display(){
	if(empty()) return;
	int i;
	cout<<"\nQueue:: ";
	for(i = front; i != rear; i = (i+1)%size){
		cout<<queue[i]<<" ";
	}
	cout<<queue[i]<<endl;
}

void Queue::menu(){
	int choice;
	while(1){
		cout<<"\n-------------------------------\n";
		cout<<"\n1. enqueue\n2. dequeue\n3. display\n4. exit\n";
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
				cout<<"\nInvalid choice! Enter again..\n";		
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
