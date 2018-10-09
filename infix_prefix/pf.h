#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10
struct stack
{
    char array[MAX];

    int top;
};
int isempty(struct stack s);
int isfull(struct stack s);
char stacktop(struct stack s);
void push(struct stack* s, char element);
void pop(struct stack* s);
void display(struct stack s);
int opvalue(char c);
int prcd(char c, char d);
int isclose(char c);
int isopen(char c);