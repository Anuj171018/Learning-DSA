#include <iostream>
using namespace std;
int stack[5],top=-1,n=5;
void push(int a){
	if(top==n-1){
		cout<<"Stack is full "<<endl;
	}
	else{
		top++;
		stack[top]=a;
	}
}

void pop(){
	if(top==-1){
		cout<<"Stack is empty/underflow "<<endl;
		return;
	}
	cout<<"Pop return (Deleted) element : "<<stack[top]<<endl;
	top--;
}
int peek(){
	return stack[top];
}

void display(){
	    cout<<"Elements of Stack are: "<<endl;
    cout<<""<<endl;
    for(int i=top;i>=0; i--)
    {
       
        cout<<"|\t"<<stack[i]<<"\t|"<<endl;
        cout<<"-----------------"<<endl;
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
	cout<<"\n top value is :"<<peek()<<endl;
	display();
	pop();
	cout<<"\n top value is :"<<peek()<<endl;
	display();
	

		return 0;
}
