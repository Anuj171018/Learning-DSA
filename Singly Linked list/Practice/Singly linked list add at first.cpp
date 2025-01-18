#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head = NULL;
void addAtFirst(int x){
	Node *newNode = new Node;
	newNode->data=x;
	newNode->next=head;
	head=newNode;
}
void display(){
	Node *temp=head;
	cout<<"Element of singly linked list : "<<endl;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n end of the linked list ";
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
	display();

		return 0;
}
