#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head=NULL;
void addAtFirst(int x){
	Node *newNode=new Node;
	newNode->data=x;
	newNode->next=head;
	head=newNode;
}
void addAtLast(int x){
	Node *newNode=new Node;
	newNode->data=x;
	newNode->next=NULL;
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}
void addAtPos(int pos,int x){
	Node *newNode=new Node;
	newNode->data=x;
	if(pos==1){
		newNode->next=head;
		head=newNode;
		return;
	}
	Node *temp=head;
	for(int i =1;i<pos-1 && temp!=NULL;i++){
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
}
void display(){
	Node *temp=head;
	cout<<"\n Linked list : "<<endl;
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
	display();
	addAtPos(3,101);
	display();
		return 0;
}
