#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;	
		
};
class queue{
	public:
	
		node *front;
		node *rear;
	queue(){
			
			front=NULL;
			rear=NULL;
			node *next=NULL;
		}
		void enqueue(int value){
			node *q1= new node;
			q1->data=value;
			q1->next=NULL;
			
			
			if(front==NULL && rear==NULL){
				front=rear=q1;
				return;
			}
			rear->next=q1;
			rear=q1;
		}
		void dequeue(){
			node *ptr=front;
			if (front==NULL){
				cout<<"empty!"<<endl;
			}
			else{
				front=front->next;
				 delete ptr;
				 cout<<"value deleted!"<<endl;
			}
	}

		void Display(){
		
			node *temp=front;
			while(temp!=NULL){
				cout<<"value:"<<temp->data<<endl;
				temp=temp->next;
			
			}
		}
};
int main(){
	queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.Display();
	q.dequeue();
	q.dequeue();
	q.Display();
	
	
}
