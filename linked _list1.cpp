//============================================================================
// Name        : linked.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *next;
};
void push(node ** head,int value)//for inserting at the start of linked list
{
	node * newnode = new node;
	newnode->data=value;
	newnode->next= *head;
	*head=newnode;

}
void insertafter(node * pnode,int val)//pnode --previous node
{
	node *newnode = new node();
	newnode->data=val;
	newnode->next=pnode->next;
	pnode->next=newnode;

}
void printnode(node *n1)
{
	while(n1!=NULL)
	{
		cout<<n1->data<<'\t';
		n1=n1->next;
	}
}

int main() {
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;
	//Allocating dynamic memory
	head = new node();
	third= new node();
	second = new node();
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
   //Traversing the linked list
	printnode(head);
	push(&head,0);
	cout<<endl;
	printnode(head);
	insertafter(third,4);
	cout<<endl;
	printnode(head);






}
