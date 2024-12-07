#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *creation_node(struct node *head)
{ 
    struct node *ptr;
    struct node *newnode;
    int value,i,size=3;
    for(i=0;i<size;i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed.\n");
            return head;
        }

        printf("enter the data for node:");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            printf("head node = %d\n",head->data);
        }
        else
        {
            ptr=head;
            while(ptr->next!= NULL)
            {
                ptr= ptr->next;
            }
            ptr->next=newnode;
            printf("insert successfull\n");
        }
    }
    return head;

}
void display(struct node * head)
{
    int i;
    struct node * ptr=head;
    if(head==NULL)
    {
        printf("the list is empty");
        return;
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL\n");
    }
}
void main()
{
    struct node * head=NULL;
    int size,i;
    head = creation_node(head);
    display(head);

}