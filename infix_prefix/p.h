#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define pf printf
#define sf scanf

typedef struct 
{
    char array[20];
    int top;
}stack;

void push(stack *,char);
char pop(stack *);
bool isEmpty(stack *);
char stackTop(stack *);
int precedence(char);
