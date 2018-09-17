#include"q.h"

void create(queue *q)
{	
		q->f=0;
		q->r=-1;
}

bool isEmpty(queue *q)
{
	if(q->f>q->r)
		return true;
	else 
		return false;
}

bool isFull(queue *q)
{
		if(q->f==0&&q->r==size-1)
			return true;
		else
			return false;
}


void enqueue(queue *q)
{
	int ele;
	if(isFull(q))
	{
		pf("queue full\n");
		return ;
	}
				
	pf("enter the element to be inserted : ");
	sf("%d",&ele);
	q->a[++q->r]=ele;
}



int dequeue(queue *q)
{	int x,i;
	
	if(isEmpty(q))
	{
		pf("queue empty\n");
		return 0;
	}
	
	else
	{
		x=q->a[q->f];
		for(i=0;i<q->r;i++)
		{
			q->a[i]=q->a[i+1];
		}
		q->r--;
	}
	
	
	return x;
}

void display(queue *q)
{	int i;
	if(isEmpty(q))
	{
		pf("queue empty\n");
		return;
	}
	
	 if(isFull(q))
		{
			pf("queue full\n");
			
		}
	
	
	
		for(i=q->f;i<=q->r;i++)
			{
				pf("%d ",q->a[i]);
			}

					
	pf("\n");
}


