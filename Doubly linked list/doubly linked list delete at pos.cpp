#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
};
Node *head=NULL;

void insert(int x){
	Node *newNode = new Node;
	newNode->data=x;
	newNode->next=head;
	newNode->prev=NULL;
	if(head != NULL){
		head->prev=newNode;
	}
	head=newNode;
}

void insertAtEnd(int x){
	Node *newNode=new Node;
	newNode->data=x;
	newNode->next=NULL;
	newNode->prev=NULL;
	if(head == NULL){
		insert(x);
		return;
	}
	Node *temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
}
void show(){
	if(head==NULL){
		cout<<"Linked list is empty"<<endl;
		return;
	}
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}	
}
void deleteNode(){
	Node *temp=head;
	head=head->next;
	head->prev=NULL;
	delete temp;
}

void deleteEndNode(){
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->prev->next=NULL;
	delete temp;
}

void deleteAtPos(int pos){
	Node *temp = head;
	if(head==NULL){
		cout<<"Linked list is aready empty"<<endl;
		return;
	}
	if(pos<=0){
		cout<<"You have entered negative value"<<endl;
	}
	if(pos==1){
		deleteNode();
		return;
	}
	for(int i=1;i<pos &&temp!=NULL;i++){
		temp=temp->next;
	}
	if(temp==NULL){
		cout<<"You entered not valid pos."<<endl;
	}
	if(temp->next != NULL){
		temp->next->prev=temp->prev;
	}
	if(temp->prev!=NULL){
		temp->prev->next = temp->next;
	}
	delete temp;
}

int main ()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	insert(70);
//	deleteNode();
//	deleteEndNode();
	deleteAtPos(2);
	show();
	
		return 0;
}
