#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			next=NULL;
			cout<<"Node Created "<<"\n";
		}
};
int main ()
{
	Node *f1=new Node(5);
	Node *f2=new Node(6);
	Node *f3=new Node(7);
	Node *head=f1;
	f1->next=f2;
	f2->next=f3;
	
	cout<<"Data =>"<<f1->data<<endl;
	cout<<"Data =>"<<f2->data<<endl;
	cout<<"Data =>"<<f3->data<<endl;
	
	
		return 0;
}
