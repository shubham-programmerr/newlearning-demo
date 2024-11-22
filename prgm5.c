#include<stdio.h>
#include<stdlib.h>
#define max 10
void main()
{
    int arr[max], top=-1,size,value,i;
    printf("the creation of stack of stack with insertion\n");
    printf("----------------------------------------------\n");
    for(i=0;i<=max;i++)
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
    for(i=top;i>=0;i--)
    {
        printf("\n%d\t",arr[i]);
    }


}