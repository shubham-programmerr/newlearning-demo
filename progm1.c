#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void creation_node(struct node *head)
{ 
    struct node *ptr;
    int value;
    printf("enter the data for node:");
    scanf("%d",&value);
    struct node *newnode;
    newnode= (struct node *)malloc(sizeof(struct node*));
    newnode->data=value;
    newnode->next=NULL;
    printf("newnode=%d\n",newnode->data);
    if(head==NULL)
    {
        head=newnode;
        printf("head node = %d\n",head->data);
    }
    else
    {
        ptr=head;
        while(ptr->next = NULL)
        {
            ptr= ptr->next;
           
        }ptr->next=newnode;
        printf("insert successfull\n");
    }
    
}
void display(struct node * head)
{
    int i;
    struct node * ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}
void main()
{
    struct node * head;
    int size,i;
    printf("enter the number of nodes you want in linked list");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        creation_node(head);
    }
    display(head);

}