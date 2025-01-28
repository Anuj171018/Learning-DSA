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
void delAtFirst(){
	if(head==NULL){
		cout<<"Linked list is empty "<<endl;
		return;
	}
	Node *temp=head;
	head=temp->next;
	delete temp;
}
void display(){
	Node *temp=head;
	cout<<"\n Linked list is "<<endl;
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
	display();
	delAtFirst();
	display();
		return 0;
}
