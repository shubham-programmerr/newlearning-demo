#include<stdio.h>
#include<stdlib.h >
#define max 10
typedef struct stack{
    int arr[max];
    int top;
}stack;

int main()     
{
    stack *ptr=(stack*)malloc(sizeof(stack*));
    ptr -> top=-1;   //insitialing the stack 
    int value,size,i;
    printf("\nenter the number of elements of you want to add in the stack:");
    scanf("%d",&size);
    if(size>max)
    {
        printf("the size is above the max\n");
    }
    else
    {
        for(i=0;i<max;i++)
        {
            if(ptr->top==max-1)
            {
                printf("the stack is overflow\n");
                break;
            }
            printf("\nenter the value for stack:");
            scanf("%d",&value);
            ptr->top++;
            ptr->arr[ptr->top]=value;
        }     
    }
    printf("\n%d ---->top element of the stack\t",ptr->arr[ptr->top]);
    for(i=ptr->top-1;i>=0;i--)
    {
        printf("\n%d\t",ptr->arr[i]);
    }
    free(ptr);
    return 0;

}