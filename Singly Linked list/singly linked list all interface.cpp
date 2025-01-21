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
Node addAtLast(int x){
	Node *newNode=new Node;
	newNode->data=x;
	newNode->next=NULL;
	Node *temp = head;
	while(temp->next !=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}
void addAtPos(int pos,int x){
	Node *newNode=new Node;
	newNode->data=x;
	if(pos==1){
		newNode->next=head;
		head = newNode;
		return;
	}
	Node *temp = head;
	for(int i=1;i<pos-1 && temp!=NULL;i++){
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
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
	int i=1;
	int x,pos;
	while(i){
		cout<<"Enter 1 for insert data at first postion"<<endl;
		cout<<"Enter 2 for insert data at last postion"<<endl;
		cout<<"Enter 3 for insert data at user define postion"<<endl;
		cout<<"Enter 4 for displaying the data in linked list"<<endl;
		cout<<"Enter 0 for exist"<<endl;
		cin>>i;
		if(i==1){
			cout<<"Enter the value of data : ";
			cin>>x;
			addAtFirst(x);
		}
		else if(i==2){
			cout<<"Enter the value of data : ";
			cin>>x;
			addAtLast(x);
		}
		else if(i==3){
			cout<<"Enter the value of data : ";
			cin>>x;
			cout<<"Positon of data : ";
			cin>>pos;
			addAtPos(pos,x);
		}
		else if(i==4){
			display();
		}
		else if(i==0){
			break;
		}
		else{
			cout<<"You have enter the wrong number ";
		}
	}	

		return 0;
}
