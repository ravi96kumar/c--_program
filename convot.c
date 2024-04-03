#include<stdio.h>
void main()
{
    const volatile int a=10;
    int b=20;
    int c=30;
    printf("a=%d \n b=%d\n c=%d",a,b,c);
}