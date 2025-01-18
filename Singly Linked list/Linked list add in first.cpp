#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;	
};

Node *head=NULL;

void insert(int x){
	Node *newNode = new Node;
	newNode->data=x;
	newNode->next=head;
	head=newNode;
}

void show(){
	Node *temp = head;
	cout<<"\n Element of linked list\n";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n end of linked list";
}




int main ()
{	
	insert(10);
	insert(20);
	insert(30);
	show();
	insert(40);
	insert(50);
	insert(60);
	show();

		return 0;
}
