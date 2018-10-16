#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define pf printf
#define sf scanf

typedef struct 
{
    int a[10];
    int size;
}heap;

void insert(heap*);
void swap(int *,int *);
void maxheapify(int *,int ,int);
void print(heap*);
void sort(heap*);


