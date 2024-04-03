#include<stdio.h>
int main()
{
    int a,b,c,i,n,sum=0;
    printf("\nenter the number=");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    i=b/10;
    sum=(a*a*a)+(c*c*c)+(i*i*i);
    if(n==sum)
    {
        printf("\n%d is a amstraong number",n);
    }
    else
    printf("\n not a amstrong number");
}