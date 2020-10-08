#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
}*first=NULL;

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
int Sum(Node *p)
{
	int sum=0;
	if(p!=NULL)
	{
		return Sum(p->next)+p->data;
	}
	else
	return 0;
}
int main()
{
	int A[]={2,3,4,5,6};
	create(A,5);
	std::cout<<"Sum is: "<<Sum(first)<<endl;
	return 0;
}
