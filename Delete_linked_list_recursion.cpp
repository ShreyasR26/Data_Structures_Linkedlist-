#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
}*first;
void create(int A[], int n)
{
	Node *t,*last;
	first= new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;++i)
	{
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last=t;
	}
	
}
void display(Node *p)
{
	if(p!=NULL)
	{
	
	cout<<p->data;
	display(p->next);
   }
}
int del(int pos)
{
	int x;
	if(pos==0)
	{
		Node *p=first;
		first=first->next;
		delete p;
	}
	else
	{
		Node *p=first;
		Node *q=NULL;
		for(int i=0;i<pos-1 &&p ;++i)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		x=p->data;
		delete p;
		
		}
		return x;
	}

int main()
{
	int A[]={3,4,5,6,7};
	create(A,5);
	display(first);
	del(4);
	display(first);
	return 0;
	}
