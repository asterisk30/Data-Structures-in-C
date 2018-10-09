#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define pf printf
#define sf scanf
#define max(x, y) (((x) > (y)) ? (x) : (y))
typedef struct 
{
    int data;
    struct node* left;
    struct node* right; 
}node;

node* create();
void displaystr(node*);
node* insert(node*,int);
void inorder(node*);
void preorder(node*);
void postorder(node*);
int search(node*,int);
int height(node*);