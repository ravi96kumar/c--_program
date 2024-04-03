#include<stdio.h>
#include "great3.c"
//extern int x;
void main()
{
    int t1,t2,next,n;
    printf("enter the  maximum number");
    scanf("%d",&n);
    t1=0;
    t2=1;
    next=t1+t2;
    printf("fib series %d \n%d",t1,t2);
    for(int i=3;i<=n;++i)
    {
        printf("\n%d",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    
    }
    printf("x=%d",x);
}