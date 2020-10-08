#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
}*head;

void create(int A[],int n)
{
	Node *last,*temp;
	Node *head=new Node;
	head->data=A[0];
	head->next=head;
	last=head;
	for(int i=1;i<n;++i)
	{
		Node *temp=new Node;
		temp->data=A[i];
		temp->next=head;
		last=temp;
	}
 } 
 
 void display(Node *p)
 {
 	int flag=0;
 	if(p!=head || flag==0)
 	{
 		flag=1;
 		cout<<p->data;
 		display(p->next);
 	}
 	flag=0;
	 
 }
 int main()
 {
 	int A[]={2,7,8,4,6};
 	create(A,5);
 	display(head);
 	return 0;
 }
