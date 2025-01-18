#include <iostream>
using namespace std;
#define n 5
int queue[n];
int f=-1,r=-1;
void enqueue(int x){
	if(r==n-1){
		cout<<"Queue is full/overflow"<<endl;
		return;
	}
	if(f==-1){
		f=0;
	}
	r++;
	queue[r]=x;
	cout<<"Element added to the queue is : "<<x<<endl;
}
void dequeue(){
	if(f==-1){
		cout<<"Stack is empty/underflow"<<endl;
		return;
	}
	cout<<"Deleted element form the queue is : "<<queue[f]<<endl;
	f++;
	if(f>r){
		f=-1;
		r=-1;
	}
}
int peek(){
	return queue[f];
}
void isFull(){
	if(r==n-1){
		cout<<"Queue is full "<<endl;
	}
	else{
		cout<<"Queue is empty"<<endl;
	}
}

void isEmpty(){
	if(f==-1){
		cout<<"Queue is empty"<<endl;
	}
	else{
		cout<<"Queue is full "<<endl;
	}
}


int main ()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	dequeue();
	cout<<"top element :"<<peek()<<endl;
	isFull();
		return 0;
}
