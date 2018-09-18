#include "p.h"
char stackTop(stack *s)
{
    return s->array[s->top];
}
bool isEmpty(stack *s)
{
    if(s->top==-1)
        return true;
    return false;
}


void push(stack *s,char ch)
{
    s->array[s->top++]=ch;
}

char pop(stack *s)
{
    char x;
    x=s->array[s->top];
    s->top--;
    return x;
}

int precedence(char ch)
{
    switch(ch)
    {
        case '+': return 1;break;
        case '-' : return 1;break;
        case '*': return 2;break;
        case '/' : return 2;break;
        case '^' : return 3;break;
    }
}