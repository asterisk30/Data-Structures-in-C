//author : asterisk30
#include<stdio.h>
#include<stdlib.h>

#define pf printf
#define size 5
#define sf scanf

typedef struct 
{
	int data;
	struct node *next;
}node;

node* createNode();
void insertFront(node**);
void insertRear(node**);
void deleteFront(node**);
void deleteRear(node**);
void display(node**);
