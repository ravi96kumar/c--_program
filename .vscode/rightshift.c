#include<stdio.h>
void main()
{
    int n,i,k;
    n=32;
    for(i=8;i>=0;i--)
    {
    k=n>>i;
    if(k&1)
    {
        printf("1");

    }
    else
    {
    printf("0");
    }
    }

}
 /*int i,k;
    for(i=8;i>=0;i--)
    {
        k=rev>>i;
        if(k&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }*/