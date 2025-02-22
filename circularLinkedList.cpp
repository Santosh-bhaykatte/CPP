// Circular Linked list implementation
#include<iostream>
using namespace std;

// For creating node
class Node{
	public:
		int data;
		Node* ptr;
};

// For creating Linked list
class LinkedList : public Node{
	Node* head; 
	Node* tail;
	public:
		LinkedList(){
			head = tail = NULL;
		}
		void appendNode(int);
		void insertAtBeg(int);
		void displayList();
		void countNode();
		void insertAfter(int, int);
		void deleteAtBeg();
		void deleteNode(int);
		void menu();
};

void LinkedList::appendNode(int ele){
	Node* nn = new Node;
	nn->data = ele;
	if(head == NULL){
		head = tail = nn;
		nn->ptr = head;
		cout<<"\nElement added successfully\n";
		return;
	}
	nn->ptr = head;
	tail->ptr = nn;
	tail = nn;
	cout<<"\nElement added successfully\n";
	return;
}

void LinkedList::insertAtBeg(int ele){
	Node* nn = new Node;
	nn->data = ele;
	if(head == NULL){
		head = nn;
		nn->ptr = head;
		tail = nn;
		cout<<"\nElement added successfully\n";
		return;
	}
	nn->ptr = head;
	head = nn;
	tail->ptr = head;
	cout<<"\nElement added successfully\n";
	return;
}

void LinkedList::displayList(){
	Node* temp = head;		//create new pointer to traverse
	
	if(temp == NULL){
		cout<<"\n\nList is Empty\n";
		return;
	}
	cout<<"\nLinked List :: [";
	do{
		cout<<temp->data<<" ";
		temp = temp->ptr;
	} while(temp != head);
	cout<<"]\n";
	return;
}

void LinkedList::countNode(){
	int cnt = 0;
	Node* temp = head;
	
	if(temp == NULL){
		cout<<"\nList is Empty\n";
		return;
	}
	
	do{
		++cnt;
		temp = temp->ptr;
	} while(temp != head);
	
	cout<<"\nTotal nodes in list: "<<cnt<<endl;
	return;
}

void LinkedList::insertAfter(int target, int ele){
	bool isFound = false;
	Node* temp = head;
	
	while(temp->ptr != head && temp->data != target){
		temp = temp->ptr;
	}
	
	if(temp->data == target){
		isFound = true;
	}
	if(!isFound){
		cout<<"\nTarget Element is not present in list\n";
		return;
	}
	Node* nn = new Node;
	nn->data = ele;
	nn->ptr = temp->ptr;
	temp->ptr = nn;
	
	cout<<"\n"<<ele<<" added successfully\n";
	
	if(temp == tail){
		tail = nn;
	}
	return;
}

void LinkedList::deleteAtBeg(){
	if(head == NULL){
		cout<<"\nList is Empty\n";
		return;
	}
	Node* temp = head;
	head = head->ptr;
	delete temp;
	temp = NULL;
	
	tail->ptr = head;
	
	if(head == tail){
		Node* temp = head;
		delete temp;
		temp = NULL;
		
		head = NULL;
		tail = NULL;
		cout<<"\nElement successfully deleted\n";
		return;
	}
	
	cout<<"\nElement successfully deleted\n";
	return;
}

void LinkedList::deleteNode(int target){
	bool isFound = false;
	Node* temp = head;
	Node* previous;
	
	if(temp == NULL){
		cout<<"\nList is Empty\n";
		return;
	}
	
	while(temp->ptr != head && temp->data != target){
		previous = temp;
		temp = temp->ptr;
	}
	if(temp->data == target){
		isFound = true;
	}
	if(!isFound){
		cout<<"\nElement is not present in list\n";
		return;
	}
	
	previous->ptr = temp->ptr;
	if(previous->ptr == head){
		tail = previous;
	}
	delete temp;
	temp = NULL;
	cout<<"\n"<<target<<" successfully deleted from list\n";
	return; 
}

void LinkedList::menu(){
	int ch;
	while(1){
		cout<<"\n--------------------------------\n";
		cout<<"\n1. Append node\n2. Insert node At begin\n3. Display list\n4. Count nodes";
		cout<<"\n5. Insert node after An element\n6. Delete node from begin";
		cout<<"\n7. Delete node from list\n8. Exit\n";
		
		cout<<"\n---Enter your choice: ";
		cin>>ch;
		
		int ele, target;
		switch(ch){
			case 1:
				cout<<"\nEnter element: ";
				cin>>ele;
				appendNode(ele);
				break;
			case 2:
				cout<<"\n---Enter element: ";
				cin>>ele;
				insertAtBeg(ele);
				break;
			case 3:
				displayList();
				break;
			case 4:
				countNode();
				break;
			case 5:
				cout<<"\n---Enter target element: ";
				cin>>target;
				cout<<"\n---Enter element to add: ";
				cin>>ele;
				insertAfter(target, ele);
				break;
			case 6:
				deleteAtBeg();
				break;
			case 7:
				cout<<"\n---Enter element to delete: ";
				cin>>target;
				deleteNode(target);
				break;
			case 8:
				cout<<"\nExiting From Application...\n";
				return;
			default:
				cout<<"\nInvalid choice!\n";			
		}
		
	}
}

int main()
{
	LinkedList linkedList;
	linkedList.menu();
	
	return 0;
}
