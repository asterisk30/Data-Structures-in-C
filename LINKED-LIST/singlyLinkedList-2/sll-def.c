#include"sll.h"

node *createNode()
{ 
    node *temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
        {
            pf("no memory allocated\n");
            return ;
        }
    temp->next=NULL;
    
    return temp;
}

void INSERT(node **head)
{  int x;
    
     node *temp=createNode();
    pf("enter value : ");
    sf("%d",&x);
    temp->data=x;
    node *last=*head,*prev=NULL,*curr=*head,*first=*head;;
    if((first==NULL)/*||(first->data>x)*/)
        *head=temp;

    while(curr->next!=NULL)
    {
        if(curr->data>x)
        {
            prev->next=temp;
            temp->next=curr;
            break;
        }

        prev=curr;
        curr=curr->next;
    }
    curr->next=temp;
   
}
void insertFront(node**head)
{  
    node *temp=createNode();
    pf("enter value : ");
    sf("%d",&temp->data);
    if(*head==NULL)
    {
        temp->next=NULL;
        *head=temp;
    }
    else
    {
        temp->next=*head;
        *head=temp;
    }  
}

void insertRear(node **head)
{   node *temp=*head;
    node *new=createNode();
    pf("enter value : ");
    sf("%d",&temp->data);
    if(*head==NULL)
        *head=new;
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
    }
}

void deleteFront(node **head)
{   node *temp=*head;
    if(*head==NULL)
        return;
    else
    {
       *head=temp->next;
       free(temp);
    }
}

void deleteRear(node **head)
{
    node *curr=*head;
    node *prev=curr;
    if(curr==NULL)
        return;
    if(curr->next==NULL)
        *head=NULL;
    while(curr->next!=NULL)
    {   prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    free(curr);
}

void display(node **head)
{   if(*head==NULL)
    {   pf("empty\n");
        return;
    }
    node *temp=*head;
    while(temp!=NULL)
    {
        pf("%d->",temp->data);
        temp=temp->next;
    }pf("\n");
}
