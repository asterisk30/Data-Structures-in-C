#include"sll.h"

int main()
{	node *head=NULL;
	while(1)
	{
		system("clear");
		pf("LIST : ");
		display(&head);
		int c;
	
		pf("1.insert at front\n2.insert at end\n3.delete from front\n4.delete from end\n5.display\n6.exit\n7.INSERT\n8.DELETE\nEnter choice : ");
		sf("%d",&c);
	
		switch(c)
		{
			case 1 : insertFront(&head);
			break;
			case 2 : insertRear(&head);
			break;
			case 3 : deleteFront(&head);
			break;
			case 4 : deleteRear(&head);
			break;
			case 5 : display(&head);
			break;
			case 6 : return 0;
			case 7 : INSERT(&head);
			break;
			default : ("wrong entry\n");
		}
	};
	return 0;
}




