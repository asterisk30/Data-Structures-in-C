#include"q.h"

int main()
{
		queue q;
		create(&q);
		do
		{ system("clear");
		int c;
		pf("queue : ");
		display(&q);
		pf("1.enqueue\n2.dequeue\n3.display\n4.exit\nenter choice : ");
		sf("%d",&c);
		
		switch(c)
		{
			case 1 : enqueue(&q);
			break;
			case 2 : dequeue(&q);
			break;
			case 3 : display(&q);
			break;
			case 4 : return 0;
			default : pf("enter correct choice \n");
			
		}
		}while(1);
return 0;
}
