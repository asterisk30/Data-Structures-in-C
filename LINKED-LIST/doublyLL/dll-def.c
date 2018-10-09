#include"dll.h"

node *createNode()
{   int data;
    node *temp=(node*)malloc(sizeof(node));
    temp->left=NULL;
    temp->right=NULL;
    pf("enter node data : ");
    sf("%d",&data);
    temp->data=data;
    return temp;
}
node* insertFront(node *head)
{
    node *new=createNode();
    if(head==NULL)
        head=new;
    else
    {
        new->right=head;
        head->left=new;
        head=new;
    }
return head;
}

node* insertEnd(node *head)
{
    node *new=createNode();
    node *temp=head;
    if(head==NULL)
    {
        return new;
    }
    while(temp->right!=NULL)
        temp=temp->right;

    temp->right=new;
    new->left=temp;
return head;
}
node* deleteFront(node *head)
{   
   node* temp =head;
	if(head!=NULL)
	{
		if(temp->right==NULL)
		{
			head=NULL;
			free(temp);
		}
		else
		{
			head = temp->right;
			free(temp);		
		}
	}
	
	return head;
}

void display(node *head)
{
    node *temp=head;
    if(head==NULL)
        pf("empty\n");
    while(temp!=NULL)
    {
        pf("%d->",temp->data);
        temp=temp->right;
    }pf("\n");
}

node* deleteRear(node *head)
{   node *prev=NULL;
    node *temp=head;  
    if(head!=NULL)
    {
        if(temp->right==NULL)
        {
            head=NULL;
            free(temp);
        }
        else
        {
             while(temp->right!=NULL)
            {
              prev=temp;
             temp=temp->right;
            }
        prev->right=NULL;
        }
    }
return head;
}
