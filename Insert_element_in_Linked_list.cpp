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
void insert(int ele, int pos)
{
	Node *t,*p;
	
	if(pos==0)
	{
		Node *t= new Node;
		t->data=ele;
		t->next=first;
		first=t;
	}
	else
	{
		Node *t= new Node;
		t->data=ele;
		p=first;
		for(int i=0;i<pos-1;++i)
		{
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
	}
}
void display(Node *p)
{
	if(p!=NULL)
	{
	std::cout<<p->data<<" ";
	display(p->next);	
 }

}
int main() 
{
	int A[]={2,4,5,7,9};
	int ele,pos;
	create(A,5);
	display(first);
	 std::cout<<"\n";
	std::cout<<"Enter Element to insert \n";
	std::cin>>ele;
	std::cout<<"Enter position to insert \n";
	std::cin>>pos;
	insert(ele,pos);
	display(first);
	return 0;
}

