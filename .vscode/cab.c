#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,c;
    a=10;
    b=20;
    c=add(a,b);
}
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
