#include<stdio.h>
void fun(int *,int *);
int main()
{
    int x=10;
    int y=20;
    fun(&x,&y);
    printf("\n%d %d",x,y);
}
void fun(int *a,int *b)
{
    *a=30;
    *b=40;
    int c=*a+*b;
    printf("\n%d",c);
}