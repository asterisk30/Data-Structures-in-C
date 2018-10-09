#include<stdio.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

typedef struct 
{
	int data;
	struct node *next;
}node;

node* createNode();

node* insertFront(node*);
node* insertRear(node*);
node* insertAfter(node *);
node* deleteFront(node *);
node* deleteRear(node*);
node* insertSorted(node *);
node* deleteElement(node *);
void sort(node*); 
void display(node*);
