//convert infix to post fix
#include<stdio.h>
#include<string.h>

#define max 100

char stack[max];
int top=-1;

void push(char a);
int stack_full();
int stack_empty();
char pop();
char peek();
int isoperand(char a);
int isoperator(char a);
int priority(char a);
void convert(char infix[max],char postfix[max]);

void main()
{
    char infix[max],postfix[max];
    printf("Infix Expression: ");
    gets(infix);
    convert(infix,postfix);
    printf("Postfix Expression: %s \n",postfix);
}
void push(char a)
{
    if(stack_full())
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        stack[++top]=a;
    }
}
int stack_full()
{
    if(top==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stack_empty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char pop()
{
    char x;
    if(stack_empty())
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        x=stack[top--];
    }
    return x;
}
char peek()
{
   return stack[top];
}
int isoperand(char x)
{
    if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isoperator(char a)
{
    if(a=='+'|| a=='-'|| a=='*'|| a=='/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int priority(char a)
{
    if(a=='*'||a=='/')
    {
        return 3;
    }
    else if(a=='+'||a=='-')
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
void convert(char infix[max],char postfix[max])
{
    char string;
    int k=0;
    for(int i=0;i<strlen(infix);i++)
    {
        if(isoperand(infix[i]))
        {
            postfix[k++]=infix[i];
        }
        else if(isoperator(infix[i]))
        {
            while(priority(infix[i])<=priority(peek()))
            {
                string=pop();
                postfix[k++]=string;
            }
            push(infix[i]); 
        }
        else if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else
        {
            while(peek()!='(')
            {
                string=pop();
                postfix[k++]=string;
            }
            string=pop();
        }
    }
    while(stack_empty()!=1)
    {
        string=pop();
        postfix[k++]=string;
    }
    postfix[k]='\0';
}