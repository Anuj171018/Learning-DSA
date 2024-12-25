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
		return 0;
}
