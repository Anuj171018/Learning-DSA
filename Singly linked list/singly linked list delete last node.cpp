//Node deletion for Singly Linked list for any position
#include<iostream>
using namespace std;
class Node{
	public:
		int data;//10
		Node *next;

	Node(int data){
		this->data=data;
		next=NULL;
		cout<<"\n Node created ";
		
	}
};
Node * addAtLast(Node *head,int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	}else{
		Node *temp=head;
		while(temp->next!=NULL){
			temp= temp->next;
		}
		temp->next=newNode;
	}
	cout<<"\n node added \n";
	return head;
}
void display(Node *head){
	Node *temp=head;
	
	while(temp!=NULL){
		cout<<"==>"<<temp->data;//==>10==>20==>30==>40
		temp=temp->next;
	}
}
void addAtPos(Node *head,int pos, int data){
	Node *newNode = new Node(data);
	Node *temp1=head;
	Node *temp2=head->next;
	pos--;
	while (pos>1){
		temp1 =temp1->next;
		temp2 =temp2->next;
		pos--;
	}
	temp1->next=newNode;
	newNode->next=temp2;
}
Node * deleteFirstNode(Node *head){
	Node *temp=head;
	head = head->next;
	delete temp;
	return head;
}
Node * deleteLastNode(Node *head){
	Node *temp = head;
	if(head->next==NULL){
		head=NULL;
		delete temp;
		
	}else{
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		Node *temp2=temp->next;
		temp->next=NULL;
		delete temp2;
	}
	return head;
}
void deleteNodeAtPos(node *head,int pos){
	pos--;
	Node *temp1=head;
	Node *temp2=head->next;
	while(pos>1){
		temp1=temp1->next;
		temp2=temp2->next
		pos--;
	}
	Node *temp3;
	temp1->next=temp2->next;
	temp3=temp2;
	delete temp3;
}


int main(){
	Node *first=new Node(10);
	Node *second=new Node(20);
	Node *third=new Node(30);
	Node *forth=new Node(40);
	Node *fifth=new Node(50);
	
first->next=second;
second->next=third;
third->next=forth;
forth->next=fifth;
Node *head=first;
	cout<<"\n Singly Linked List Data ";
	
//	addAtPos(head,5,77);
	display(head);
	cout<<"\n";
//	head=deleteFirstNode(head);
	display(head);
	cout<<"\n print ";
	deleteLastNode(head);
	cout<<"After the delete of last node "<<endl;
	display(head);
		return 0;
}