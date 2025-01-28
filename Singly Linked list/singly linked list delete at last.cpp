#include <iostream>
using namespace std;
struct Node{
	int data ;
	Node *next;
};
Node *head=NULL;
void addAtFirst(int x){
	Node *newNode=new Node;
	newNode->data=x;
	newNode->next=head;
	head=newNode;
}
void delAtLast(){
	if(head==NULL){
		cout<<"\n Linked list is empty "<<endl;
		return;
	}
	if(head->next==NULL){
		head=head->next;
		delete head;
	}
	Node *temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	delete temp->next;
	temp->next=NULL;
}
void display(){
	Node *temp=head;
	cout<<"\n linked list is "<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main ()
{	
	addAtFirst(10);
	addAtFirst(20);
	addAtFirst(30);
	addAtFirst(40);
	addAtFirst(50);
	addAtFirst(60);
	addAtFirst(70);
	addAtFirst(80);
	addAtFirst(90);
	display();
	delAtLast();
	display();
		return 0;
}
