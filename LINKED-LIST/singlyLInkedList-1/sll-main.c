#include"sll.h"

int main()
{	node *head=NULL;
	while(1)
	{
		//system("clear");
		pf("LIST : ");
		display(head);
		int c;
	
		pf("\n1.insert at front\n2.insert at end\n3.insert after element\n4.insert sorted\n5.delete from front\n6.delete from end\n7.delete specific element \n8.sort\n9.exit\nEnter choice : ");
		sf("%d",&c);
	
		switch(c)
		{
			case 1 : head=insertFront(head);
			break;
			case 2 : head=insertRear(head);
			break;
			case 3 :head=insertAfter(head);
			break;
			case 4 : head=insertSorted(head);
			break;
			case 5 : head=deleteFront(head);
			break;
			case 6 : head=deleteRear(head);
			break;
			case 7 : head=deleteElement(head);
			break;
			case 8 : sort(head);
			break;
			case 9 : return 0;
			break;
			
			default : ("wrong entry\n");
		}
	};
	return 0;
}




