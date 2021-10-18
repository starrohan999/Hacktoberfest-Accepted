//postfix expression evaluation
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define MAX 20
int top=-1;
int stack[MAX];

void operator(char c)
{
    int t1,t2,res;
    t1=pop();
    t2=pop();
    switch(c)
    {
        case '+':
            res=t2+t1;
            break;
        case '-':
            res=t2-t1;
            break;
        case '*':
            res=t2*t1;
            break;
        case '/':
            res=t2/t1;
            break;
        case '^':
            res=pow(t2,t1);
            break;
        default:
            return;
    }
    push(res);
}

void push(int item)
{
    if(top==MAX-1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
        stack[++top]=item;
}

int pop()
{
    int x;
    if(top==-1)
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        x=stack[top--];
        return x;
    }
}

int main()
{
    char exp[MAX];
    int i,k;
    printf("Enter an POSTFIX EXPRESSION : ");
    gets(exp);
    for(i=0;i<strlen(exp);i++)
    {
        if(isdigit(exp[i]))
        {
            k=(int)(exp[i]-48);
            push(k);
        }
        else
        {
            if(exp[i]!=' ')
                operator(exp[i]);
        }
    }
    printf("\nRESULT = %d",stack[top]);
    return 0;
}
