#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		next=NULL;
		cout<<"\n node created ";
	}	
};

Node *addFirst(Node *head,int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	}
	return head;
}
void display(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<"==>"<<temp->next;
		temp=temp->next;
	}
}
int main ()
{
	Node *f1=new Node(10);
	Node *f2= new Node(20);
	Node *f3=new Node(30);
	Node *head=f1;
	f1->next=f2;
	f2->next=f3;
	head = addFirst(head,50);
	display(head);
	
		return 0;
}
