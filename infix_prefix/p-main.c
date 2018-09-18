#include "p.h"

int main()
{   system("clear");
   stack s;
   char symbol;
   int len,i=0,j=0;
   s.top==-1;
   char infix[20],prefix[20];
   pf("Enter the valid infix expression : ");
   sf("%s",infix);
    len=strlen(infix);
    //strrev(infix);
    for(i=0;i<=len-1;i++)
    {
        symbol=infix[i];
        if(isalpha(symbol))
            prefix[j++]=symbol;
        
        else if(symbol==')')
            push(&s,symbol);

        else if(symbol=='(')
            {
                while(stackTop(&s)!=')')
                prefix[j++]=pop(&s);
            }

        else
        {
            while((precedence(stackTop(&s))>=precedence(symbol))&&(!isEmpty(&s)))
            prefix[j++]=pop(&s);
        }

    }
    while(!isEmpty(&s))
    {
                    prefix[j++]=pop(&s);

    }

    prefix[j++]=pop(&s);;
    prefix[j++]='\0';
    for(i=0;i<=len-1;i++)
    {
        pf("%c",prefix[i]);
    }
    return 0;
}
