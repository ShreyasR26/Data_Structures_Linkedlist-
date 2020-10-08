#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
}*first;

void create(int A[],int n)
{
	Node *t,*last;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;++i)
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
	int count=0;
	while(p!=NULL)
	{
		std::cout<<p->data<<" ";
		p=p->next;
		count++;
	}
	std::cout<<"Count= "<<count<<endl;
}
int main()
{
	int A[]={2,3,4,5,6};
	create(A,5);
	display(first);
	return 0;
}
