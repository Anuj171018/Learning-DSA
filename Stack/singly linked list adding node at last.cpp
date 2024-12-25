//Node creation for singly Linked List
#include <iostream>
using namespace std;
class Node{
	public:
		int data ;//10
		Node *next;
		
		Node(int data){
			this->data=data;
			next = NULL;
			cout<<"\n Node created";
		}
};	

Node * addAtLast(Node *head,int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	}
	else{
		Node *temp = head;
		while(temp->next !=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
	cout<<"\n Node added success at the end of singly Linked list \n";
	return head;
}

	void display(Node *head){
	Node *temp = head;
	
	while(temp != NULL){
		cout<<"==>"<<temp->data;//==>10==>20==>30==>40
		temp = temp->next;
		
	}
}
int main ()
{	
	Node *first= new Node(10);
	Node *second= new Node(20);
	Node *third= new Node(30);
	Node *forth = new Node(40);
	Node *head=first;
	//Connect first node to second node
	head->next=second;
	//Connect second node to third node
	head->next->next=third;
	//Connect third node to forth node
	head->next->next->next=forth;
	cout<<"\n Singly Linked List Data : ";
	//cout<<head->data<<"==>"<<head->next->data<<"==>"<<head->next->next->data<<"==>"<<head->next->next->next->data;
	display(head);
	head = addAtLast(head,50);
	cout<<"\n Print data singly linked list after add new node at the end \n";
	display(head);
	
		return 0;
}
