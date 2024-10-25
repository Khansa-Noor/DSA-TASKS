#include<iostream>
using namespace std;

class queue{
	private:
		
    int	arr[5];
    int front;
    int rear;
    
    public:
    queue(){
    	front=0;
    	rear=0;
	}
		bool empty(){
		if(rear==front){
			return true;
		}
		else{
			return false;
		}
		
	}
	void Full(){
		if(rear==front){
			cout<<"Array is full!"<<endl;
		}
		else{
			cout<<"Array is not full!"<<endl;
		}
	} 
	void enqueue(int value){
	
		
		arr[rear]=value;
		rear++;
		cout<<"Value inserted!"<<endl;
	}
	
	void dequeue(){
	
			front++;
			cout<<"removed!"<<endl;
		}
	

	void display(){
		for(int i=front;i<rear;i++){
			cout<<arr[i]<<endl;
		}
		
	}	
    	
    
};
int main(){
	queue q;
	q.empty();
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.Full();
	q.enqueue(50);
	
	
	q.display();
	q.dequeue();
	q.dequeue();
	q.display();

}

