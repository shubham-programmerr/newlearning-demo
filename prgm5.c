#include<stdio.h>
#include<stdlib.h>
#define max 10
void main()
{
    int arr[max], top=-1,size,value,i,pop,num;
    printf("the creation of stack of with insertion\n");
    printf("---------------------------------------\n");
    printf("entee the size of the stack you want:");
    scanf("%d",&size);
    if(size>max)                                                      //push of elements in stack
    {
        printf("the size is more the max of stack");
        return;
    }
    else
    {
        for(i=0;i<=size-1;i++)
        {
            if(top==max-1)
            {
                printf("the stack is overflow");
                break;
            }
            top++;
            printf("\nenter the value of the array:");
            scanf("%d",&arr[top]);
        }
    }
    for(i=top;i>=0;i--)                                               //display of elments in stack
    {
        printf("\n%d\t",arr[i]);
    }
    printf("%d",top);
    printf("\nthe pop from stack of written\n");                      //pop of elements in stack
    printf("-----------------------------\n");
    printf("enter the number of steps you want to delete\n");             
    scanf("%d",&num);
    if(num>top)
    {
        printf("the given steps is invalid\n");
    }
    else
    {
        for(i=0;i<=num-1;i++)
        {
            pop=arr[top];
            printf("the popped element from stack:%d\n",pop);
            top--;
        }
    }
    printf("end of program..............");
}