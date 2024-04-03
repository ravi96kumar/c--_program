#include<stdio.h>
void main()
{
 int a,b,n,sum=0;
 printf("enter the maxmimum number upto which fibnoci has to be done\n");
 scanf("%d",&n);
 for(int i=0;i<=n;i++)
 {
    sum=sum+i;
    printf("\n the series is %d",sum);
 }
 printf("\nthe sum of fibonacci series is %d",sum);
}