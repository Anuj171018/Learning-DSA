//Stack implementation using array
#include <iostream>
using namespace std;
#define N 5
int arr[N];
int top = -1;

void push(int data){
	//Step 1 : Check overflow condition
	if(top==N-1){
		cout<<"Over flow";
		return;
	}
	else{
	//Step 2 : Increment Top by 1
	top++;
	//Step 3 : Assign data into Top
	arr[top]=data;
	cout<<"\n Data insert into the top of the stack : "<<data<<endl;
	}
}
int main ()
{	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

		return 0;
}
