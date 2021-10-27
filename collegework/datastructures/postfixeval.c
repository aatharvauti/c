#include<stdio.h>
#include<string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char x);
int isfull();
int isempty();
char pop();
char peek();
int isoperand(char x);
int convert(char postfix[MAX]);

void main()
{
    char postfix[MAX];   
    printf("ENTER THE POSTFIX EXPRESSION : \n");
    gets(postfix);
    int result;
    result=convert(postfix);
    printf("%s = %d \n", postfix, result);
}
void push(char x)
{
    stack[++top] = x;
}
int isfull()
{
    if(top == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if(top == -1)
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
    int c;
    c = stack[top--];
    return c;
}
char peek()
{
    return stack[top];
}
int isoperand(char x)
{
    if(x >= '0'&& x <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int convert(char postfix[MAX])
{
    int operator1, operator2, value;
    for(int i = 0; i < strlen(postfix); i++)
    {
        if(postfix[i]=='A'||postfix[i]=='a')
        {
            postfix[i]='1';
        }
        else if(postfix[i]=='B'||postfix[i]=='b')
        {
            postfix[i]='2';
        }
        else if(postfix[i]=='C'||postfix[i]=='c')
        {
            postfix[i]='3';
        }
        else if(postfix[i]=='D'||postfix[i]=='d')
        {
            postfix[i]='4';
        }
    }
    for(int i = 0; i < strlen(postfix); i++)
    {
        if(isoperand(postfix[i]))
        {
            push((int)postfix[i]-'0');
        }
        else         //for operator
        {
            operator1 = pop();
            operator2 = pop();
            if(postfix[i]=='+')
            {
                value = operator2 + operator1;
            }
            else if(postfix[i] == '-')
            {
                value = operator2 - operator1;
            }
            else if(postfix[i] == '*')
            {
                value = operator2 * operator1;
            }
            else
            {
                value = operator2 / operator1;
            }
            push(value);                      
        }
    }
    return pop();                            
}