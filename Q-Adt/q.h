#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define size 5
#ifndef q_h
#define q_h
#define pf printf
#define sf scanf
typedef struct
{
	int a[size];
	int f,r;

}queue;

void create(queue*);
void enqueue(queue*);
int dequeue(queue*);
void display(queue*);
bool isEmpty(queue*);
bool isFull(queue*);

#endif
