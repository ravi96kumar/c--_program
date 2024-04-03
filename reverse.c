#include<stdio.h>
void main()
{
int reverse=0,n,rem;
printf("enter the number");
scanf("\n %d",&n);
while(n!=0)
{
rem=n%10;
reverse=reverse*10+rem;
n=n/10;
}
printf("\n%d reverse is %d",n,reverse);
}

