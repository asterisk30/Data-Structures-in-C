#include"heap.h"

void insert(heap *h)
{	int i;
	pf("enter size of array : ");
    sf("%d",&h->size);
    pf("enter the array elements : ");
    for(i=0;i<=h->size-1;i++)
    {	
       	sf("%d",&h->a[i]);
    }
}

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void maxheapify(int *a, int n, int i)
{

   int largest = i;
   int l = 2*i + 1;
   int r = 2*i + 2;

   if (l < n && a[l] > a[largest])
     largest = l;

   if (r < n && a[r] > a[largest])
     largest = r;

   if (largest != i)
   {
     swap(&a[i],&a[largest]);
     maxheapify(a, n, largest);
   }
}


void sort(heap *h)
{
	int i; 
	for(i=h->size/2-1;i>=0;i--)
		maxheapify(h->a,h->size,i);
	
	for (int i=h->size; i>=0; i--)
   {
     swap(&h->a[0], &h->a[i]);
     maxheapify(h->a,i, 0);
   }
}

void print(heap* h)
{	int i;
	for(i=1;i<=h->size;i++)
    {	
       	pf("%d ",h->a[i]);
    }
    pf("\n");
}

