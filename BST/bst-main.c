#include"bst.h"
int main()
{
    node *head=NULL;
    int c,ele;
    while(1)
    {
        //system("clear");
        if(head==NULL)
        pf("EMPTY\n");
        displaystr(head);
        pf("\n");
        pf("preorder : ");
        preorder(head);
        pf("\n");
        pf("inorder : ");
        inorder(head);
        pf("\n");
        pf("postorder : ");
        postorder(head);
        pf("\n");
        pf("height of tree : %d \n",height(head));
        pf("1.insert\n2.search\n3.exit\nenter choice : ");
        sf("%d",&c);
        switch(c)
        {
            case 1 : 
            pf("enter element : ");
            sf("%d",&ele);
            head=insert(head,ele);
            break;
            case 2 : 
            pf("enter key to be searched : ");
            sf("%d",&ele);
            if(search(head,ele))
            pf("found \n");               
            else
            pf("not found \n");       
            break; 
            case 3 :return 0;
            default : pf("invalid choice \n");      
        }
    }



    return 0;
}