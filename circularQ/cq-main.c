#include"cq.h"

int main()
{	int i,priority,ele;
		queue q;
		create(&q);
		
		do
		{ 
		system("clear");
		int c;
		display(&q);
		
		pf("\n1.enqueue\n2.dequeue\n3.exit\nenter choice : ");
		sf("%d",&c);
		
		switch(c)
		{
			case 1 :pf("enter the element to be inserted : ");
					sf("%d",&ele); 
					enqueue(&q,ele);
			break;
			case 2 : 
			dequeue(&q);
			break;
		
			case 3 : return 0;
			default : pf("enter correct choice \n");
			
		}
		}while(1);
return 0;
}
