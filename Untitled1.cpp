#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int x){
		this->data=x;
		next=NULL;
	}
};
class LinkedQueue{
	private:
		Node* front;
		Node* rear;
		int size;
	public:
		LinkedQueue(){
			front=NULL;
			rear=NULL;
			size=0;
		}
	int getSize(){
		return size;
	}	
	bool isEmpty(){
		return size==0;
	}
	void enqueue(int e){
		Node* n=new Node(e);
		if(front==NULL){
			front=n;
			rear=n;
		}else{
			rear->next=n;
			rear->n;
		}
		size++;
	}
	void dequeue(){
		if(isEmpty()){
			return;
		}
		Node* temp=front;
		front=front->next;
		temp->next=NULL;
		int val=temp->data;
		delete val;
		size--;
	}
};





