#include<iostream>
using namespace std;


	class Node
	{
		public:
			int data;
			Node *next; 
			
			Node(int val) //constructor name same as class name (has no return type)
			{
				data=val;
				next=NULL;
			}
	};

void insertAtTail(Node* &head, int val)
{
	Node* n = new Node(val);
	
	if(head==NULL)
	{
		head=n;
		return;
	}
	
	Node* temp =head; //head is fixed so we'll move temp
	
	while (temp->next !=NULL)
	{
		temp=temp->next;
	}
	temp->next = n;
}

void display(Node* head)
{
	Node* temp=head;
	
	while(temp!= NULL)
	{
		cout <<temp->data << "->";
		temp=temp->next;
	}
	cout<<"NULL";
}

void insertAtHead(Node* &head, int val) //no temp cause no traversing required
{
	Node*n =new Node(val);
	/*1*/ n->next=head;
	/*2*/head=n;
}//searchin key in linked list(temp data= node)

//void deletion(Node* &head, int val)
//{
//	Node* temp=head;
//	while(temp->next->data !=val)
//	{
//		temp=temp->next;
//	}
//	Node* toDelete=temp->data;
//	temp->next=temp->next->next; //new connection of node with next to next node
//	delete toDefine;
//}

int main()
{
	Node *head= NULL; //head (start points to null) Emppty list
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	
	insertAtHead(head,10);
	
	display(head);
	
}


