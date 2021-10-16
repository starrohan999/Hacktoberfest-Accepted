#include<stdio.h>
#include<stdlib.h>
struct Node
{
    char data;
    struct Node *next;
}*top=NULL;
void push(char x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
    {
        printf("Stack is full");
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
        
    }
}
char pop()
{
struct Node *t;
char x=-1;
if(top==NULL)
{
    printf("Stack is Empty");
}
else
{
    t=top;
    top=top->next;
    x=t->data;
    free(t);
}
}
void display()
{
    
    struct Node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\n");
}
int isbalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==')')
        {
            if(top==NULL)
            {
                return 0;
                
            }
            pop();
        }



    }
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char *exp="((a+b)*(c+d))";
    printf("%d ",isbalanced(exp));
    return 0;
    
}













