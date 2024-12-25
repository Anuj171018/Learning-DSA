#include <iostream>
using namespace std;
#define N 5
int arr[N];
int top = -1;

int pop(){
	int r = -1;
	if(top==-1){
		cout<<"Under flow stack";
		return r;
	}
	else{
		r=arr[top];
		top--;
	}
	return r;
}

void push(int data){
	if(top==N-1){
		cout<<"Stack overflow";
		return;
		
	}
	else{
		top++;
		arr[top]=data;
		cout<<"\n Data insert success into the top of the stack : "<<data;
	}
}

int main ()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
	cout<<"\n Delete Top Element of the Stack : "<<pop();
		return 0;
}
