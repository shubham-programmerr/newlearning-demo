#include<stdio.h>
struct node {
    int data;
    struct node *next;
};
void creation_node(struct node *head)
{ 
    int value;
    printf("enter the data for node:");
    scanf("%d",&value);
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data=value;
    newnode->next=NULL;
}
void main()
{
    struct node * head;

}