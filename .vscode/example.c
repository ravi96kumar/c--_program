#include<stdio.h>
void fun(int);
void main()
{
    int n=1234;
    fun(n);

}
void fun(int a)
{
    int i;
    if(a!=0)
    {
    i=a%10;
    printf("%d",i);
    a=a/10;
    //fun(a);
    }
    fun(a);
}