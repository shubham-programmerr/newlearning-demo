#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node * nest;
};
void create(struct node *head,int n);
void display(struct node *head);

void create(struct node *head,int n)
{
	struct node *p,*temp;
	head=NULL;
	int i ;
	while(i!=n)
	{
		struct node * newnode = (struct node *)malloc(sizeof(struct node*));
		printf("enter the data here:");
		scanf("%d",&newnode->data);
		newnode->nest=NULL;  //new node formation 
		if(head==NULL)
		{
			head=newnode;   //make new node as first or head node 
		}
		else
		{
			p=head;
			while(p->nest!=NULL)
			{
				p=p->nest;
			}
			p->nest=newnode;
		}
		i++;	
	}
	printf("done of process");
}
void display(struct node *head)
{
    struct node *dply=head; 
	while(dply!=NULL)
	{
		printf("element %d",dply->data);
		dply=dply->nest;
	}
}
void main()
{
	int n;
	struct node *head;
	printf("enter the number of node needed:");
	scanf("%d",&n);
	create(head,n);
	display(head);
}