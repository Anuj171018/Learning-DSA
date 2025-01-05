#include <iostream>
#define N 5
using namespace std;
int top = -1;
int arr[N];
void push(int data){
	if(top==N-1){
		cout<<"Stack overflow";
		return;
	}
	else{
		top++;
		arr[top]=data;
		cout<<"Data insertion ==>"<<data<<endl;
	}
}
int pop(){
	int r=-1;
	if(top==-1){
		cout<<"underflow";
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
	

		return 0;
}
