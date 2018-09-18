#include"pf.h"
int main()
{   system("clear");
   struct stack s;
    s.top=-1;
    int i=0,j=0;
    char token,infix[100],prefix[100];
    char* prefix1;
    printf("Enter a valid infix expression:\n");
    scanf("%s",infix);
    for(i=strlen(infix)-1;i>=0;i--)
    {
        token=infix[i];
        if((token>='a'&&token<='z')||(token>='A'&&token<='Z')||(token>='0'&&token<='9'))
        prefix[j++]=token;
        else{
            while(!isempty(s)&&prcd(stacktop(s),token))
            {
                prefix[j++]=stacktop(s);
                pop(&s);

            }
            if(isempty(s)||!isopen(token))
            push(&s,token);
            else pop(&s);
        }
    }
    while(!isempty(s))
    {
        prefix[j++]=stacktop(s);
        pop(&s);
    }
    prefix[j++]='\0';
    printf("the Equivalent prefix expression is : ");
    for(i=strlen(prefix)-1;i>=0;i--)
    printf("%c",prefix[i]);

    printf("\n");
    return 0;
}

