#include<stdio.h>
void main()
{
    int n;
    printf("enter the number for which multiplication required=");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,(n*i));
    }
}