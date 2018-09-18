#include"pf.h"


int isempty(struct stack s)
{
if(s.top == -1)
return 1;
return 0;
}

int isfull(struct stack s)
{
if(s.top == MAX-1)
return 1;
return 0;
}
char stacktop(struct stack s)
{
if(!isempty(s))
return s.array[s.top];
else
printf("!!Stack is empty!!\n");

}
void push(struct stack* s, char element)
{
if(isfull(*s))
printf("!!Stack full!!\n");



else
s->array[++(s->top)] = element;

}
void pop(struct stack* s)
{
if(isempty(*s))
printf("!!Stack is empty!!\n");
else
(s->top)--;

}
void display(struct stack s)
{
int i;
if(isempty(s))
printf("!!Stack is empty!!\n");
else
{
for(i=0; i<=(s.top); i++)
printf("%c\t", s.array[i]);
printf("\n");
}
}

int isopen(char c) {
if(c=='(' || c=='[' || c=='{')
return 1;
return 0;
}
int opvalue(char c)
{
switch(c)

{
case '$': return 3;
case '*': return 2;
case '/': return 2;
case '+': return 1;
case '-': return 1;

}
}

int isclose(char c) {
if(c==')' || c==']' || c=='}')
return 1;
return 0;
}
int prcd(char c, char d) {
if(isclose(c) || isclose(d))
return 0;
if(isopen(d))



return 1;
if(c=='$' && d=='$')
return 0;
if(opvalue(c)>opvalue(d))
return 1;
return 0;
}