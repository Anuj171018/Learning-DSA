#include <iostream>
using namespace std;
#define n 5
int stack[n],top=-1;
void push(int x){
	if(top==n-1){
		cout<<"Stack is full/overflow"<<endl;
		return;
	}
	top++;
	stack[top]=x;
}
void pop(){
	if(top==-1){
		cout<<"Stack is empty/underflow"<<endl;
		return;
	}
	cout<<"\n Deleted element is : "<<stack[top]<<endl;
	top--;
}
int peek(){
	return stack[top];
}
void isFull(){
	if(top==n-1){
		cout<<"\n Stack is full"<<endl;
	}
	else{
		cout<<"\n Stack has element"<<endl;
	}
}
void isEmpty(){
	if(top==n-1){
		cout<<" \n Stack is empty"<<endl;
	}
	else{
		cout<<"\n Stack has element"<<endl;
	}
}

void display(){
	cout<<"Element of stack is : "<<endl;
	for(int i =top;i>=0;i--){
		cout<<stack[i]<<endl;
	}
	cout<<endl;
	}
int main ()
{	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	cout<<"peek element is : "<<peek();
	pop();
	cout<<"peek element is : "<<peek();
	isFull();
	isEmpty();

	

		return 0;
}
