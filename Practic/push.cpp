#include <iostream>
using namespace std;
#define N 5
int arr[N];
int top=-1;

void push(int data){
	if(top==N-1){
		cout<<"Stack Overflow";
		return;
	}
	else{
		top++;
		arr[top]=data;
		cout<<"Data insertion ==>"<<data<<"\n";
	}
}
int main ()
{	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

		return 0;
}
