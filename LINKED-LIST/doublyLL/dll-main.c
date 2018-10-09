#include"dll.h"

int main()
{
    node *head=NULL;
    int c;


    while(1)
    {
        system("clear");
        pf("LIST : ");
        display(head);
        pf("1.insert front\n2.insert rear\n3.delete Front\n4.delete end\nenter choice : ");
        sf("%d",&c);

        switch(c)
        {
            case 1 : head=insertFront(head);
            break;
            case 2 : head=insertEnd(head);
            break;
            case 3 : head=deleteFront(head);
            break;
            case 4 : head=deleteRear(head);
            break;
        }
    }



    return 0;
}