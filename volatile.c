#include<stdio.h>
void main()
{
    volatile int a=23;
    int b=100;
    int c=a+b;
    printf("the sum of %d and %d is %d",a,b,c);
}