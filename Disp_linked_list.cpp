#include <iostream>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Node
{
	int data;
	Node *next;
}*first=0;
void create(int A[],int n)
{
	int i;
	Node *t,*last;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;++i)
	{
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void display(Node *p)
{
	while(p!=NULL)
	{
		std::cout<<p->data<<" ";
		p=p->next;
	}
}
int main(int argc, char** argv) 
{
	int A[]={2,4,5,7,9};
	create(A,5);
	display(first);
	return 0;
}
