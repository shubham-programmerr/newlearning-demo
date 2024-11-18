#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int intopo(char * infix)
{
    struct stack * sp 
    char * pos=(char *)malloc(strlen(infix + 1)*sizeof(char *));
    int i = 0;
    int j = 0;
    while(infix[i]!='\0')
    {
        if(!isopertor(infix[i]))
        {
            postfix[i]=infix[i];
            i++;
            j++;
        }
        else
        {
            if(prec(infix[i])>prec(stacktop(st)))
            {
                push(sp,infix[i]);
            }
            else
            {
                postfix[i]=pop(sp);
                j++;
            }
        }
    }
}