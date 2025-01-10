#include <iostream>
using namespace std;
class Node{
	public:
	Node *prev;
	int data;
	Node *next;
	
	Node(int data){
		prev=NULL;
		this->data=data;
		next=NULL;
		cout<<"\n Node created";
	}
};
void printForward(Node *head){
	if(head==NULL){
		cout<<"\n List is Empty";
	}
	else if(head->next==NULL){
		cout<<"\n List data \n";
		cout<<"<==="<<head->data<<"===>";
	}
	else{
		cout<<"\n List data in forward Direction \n";
		while(head != NULL){
			cout<<"<==="<<head->data<<"===>";
			head=head->next;
		}
	}
}

void printBackward(Node *tail){
	if(tail==NULL){
		cout<<"\n List is Empty";
	}
	else{
		cout<<"\n List data in Backward Direction \n";
		while(tail != NULL){
			cout<<"<==="<<tail->data<<"===>";
			tail=tail->prev;
		}
	}
}


int main ()
{	Node *f1=new Node(10);
	Node *f2=new Node(20);
	Node *f3=new Node(30);
	Node *f4=new Node(40);
	
	f1->next=f2;
	f2->prev=f1;
	
	f2->next=f3;
	f3->prev=f2;
	
	f3->next=f4;
	f4->prev=f3;
	Node *head=f1;
	Node *tail=f4;
	printForward(head);
	printBackward(tail);
	
    
    
		return 0;
}
