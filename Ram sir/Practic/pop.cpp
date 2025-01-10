#include <iostream>
using namespace std;
#define N 5
int arr[N];
int top=-1;

void push (int data ){
	if(top==N-1){
		cout<<"Stack overflow"<<endl;
		return;
	}
	else{
		top++;
		arr[top]=data;
		cout<<"Data insertion "<<"==>"<<data<<"\n";
	}
}

int pop(){
	int r=-1;
	if(top==-1){
		cout<<"Stack underflow";
		return r;
	}
	else{
		r=arr[top];
		top--;
	}
	return r;
}

int main ()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	cout<<"Deleted element "<<pop()<<endl;
	cout<<"Deleted element "<<pop()<<endl;
	cout<<"Deleted element "<<pop()<<endl;
		return 0;
}
