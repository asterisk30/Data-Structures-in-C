#include"sll.h"

node *createNode()
{ 
    node *temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
        {
            pf("no memory allocated\n");
            return NULL;
        }
    temp->next=NULL;
    pf("enter value : ");
    sf("%d",&temp->data);
    return temp;
}

void sort(node *head)
{
    int a;
    node *i;
    node *j;
    for(i=head;i!=NULL;i=i->next)
      {
        for(j=i->next;j!=NULL;j=j->next)
          { 
            if(j->data <i->data)
              {
                a = i->data;
                i->data = j->data;
                j->data = a;
              }
           }
       }

}
node* insertSorted(node *head)
{
    node *new=createNode();
    node *current=head;
    node *prev;
    if ((head == NULL) || ((head)->data>=new->data) )
    { 
        new->next=head; 
        head=new; 
    } 
  else
  {
        while ((current!=NULL)&&(current->data < new->data))
        {   prev=current;
            current = current->next; 
        } 
        new->next = prev->next; 
        prev->next = new; 
  }
return head;}
node* insertAfter(node *head)
{
    node *new=createNode();
    node *temp=head;
    int after;
    pf("enter element after which to be inserted : ");
	sf("%d",&after);
    while(temp->data!=after)
    {
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
    
return head;
}

node* deleteElement(node *head)
{   int ele;
    node *temp=head;
    node *prev=NULL;
    
    pf("enter element to be deleted : ");
    sf("%d",&ele);
    if(head==NULL)
        return NULL;
    if(head->data==ele)
    {
        head=head->next;
        return head;
    }
    while((temp->data!=ele)&&(temp!=NULL))
    {   prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
        {
            pf("element not found \n");  
            return NULL;
        }
        prev->next=temp->next;
        free(temp);
        temp=NULL;
    
    return head;
} 
node* insertFront(node *head)
{  
    node *temp=createNode();
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }  
return head;}

node* insertRear(node *head)
{   node *temp=head;
    node *new=createNode();
    if(head==NULL)
        head=new;
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
    }
return head;}

node* deleteFront(node *head)
{   node *temp=head;
    if(head==NULL)
        return NULL;
    else
    {
       head=temp->next;
       free(temp);
    }
return head;}

node* deleteRear(node *head)
{
    node *curr=head;
    node *prev=curr;
    if(curr==NULL)
       return NULL;
    if(curr->next==NULL)
        head=NULL;
    while(curr->next!=NULL)
    {   prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    free(curr);
return head;
}

void display(node *head)
{   if(head==NULL)
    {   pf("empty\n");
        return ;
    }
    node *temp=head;
    while(temp!=NULL)
    {
        pf("%d->",temp->data);
        temp=temp->next;
    }pf("\n");
}
