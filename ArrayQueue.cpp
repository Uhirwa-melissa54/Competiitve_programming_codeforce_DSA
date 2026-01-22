#include <iostream>
using namespace std;
class ArrayQueue{
	private:
		int size=7;
		int arr[7];
		int front=-1;
		int rear=-1;
	public:
		bool isEmpty(){
			if(front > rear || front==-1){
				return true;
			}
			else{
				return false;
			}
			
			
		}
		
		bool isFull(){
			if(rear==(size-1)){
				return true;
			}
			else{
				return false;
			}
			
		}
		
		int enqueue(int x){
		  //  if(arr.isFull()){
		  //      cout <<"array is full";
		  //      return -1;
		  //  }
		    if (front == -1) {front = 0;}
			rear+=1;
			arr[rear]=x;
			return x;
		}
		int dequeue(){
			int a=front;
		
			front++;
			return arr[a];
		}
		int getFront(){
			return arr[front];
		}
		void display(){
			for(int i=front; i < (rear+1);i++){
				cout <<arr[i]<<"\n";
			}
		}
		
		
		
}

;
int main(){
	ArrayQueue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	cout <<"The condition of the queue now:\n";
	q.display();
	int firstDeletedValue=q.dequeue();
	int secondDeletedValue=q.dequeue();
	cout << "firstDeletedValue:"<<firstDeletedValue <<endl <<"SeconddeletedValue:"<<secondDeletedValue<<"\n";
	cout<<"The condition of the queue after deletion:\n";
	q.display();	
}
