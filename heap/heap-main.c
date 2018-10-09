#include"heap.h"
int main()
{
    int c;
    while(1)
    {
    
        pf("1.priority queue\n2.heap sort\n3.exit\nenter choice : ");
        sf("%d",&c);
        switch(c)
        {
            case 1 : 
            break;
            case 2 :    
            break; 
            case 3 :return 0;
            default : pf("invalid choice \n");      
        }
    }



    return 0;
}