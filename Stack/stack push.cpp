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
	display();
	

		return 0;
}
