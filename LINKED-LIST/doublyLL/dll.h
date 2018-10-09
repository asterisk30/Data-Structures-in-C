#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf

typedef struct
{   int data;
    struct node *left;
    struct node *right;
}node;
node* createNode();
node* insertFront(node *);
node* insertEnd(node *);
node* deleteFront(node *);
node* deleteRear(node *);
void display(node *);