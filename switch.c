#include<stdio.h>
void main()
{
    int c,d;
    char choice;
    printf("a.addition\nb.subtraction\nc.multiplication\nd.division\n");
    scanf("%c",&choice);
    printf("enter two numbers\n");
    scanf("%d%d",&c,&d);
    switch(choice)
    {
        case 'a':(printf("%d+%d=%d\n",c,d,(c+d)));
        break;
        case 'b':(printf("%d-%d=%d\n",c,d,(c-d)));
        break;
     default:
    
        printf("invalid\n");
        break;
    }
}