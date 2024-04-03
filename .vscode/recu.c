#include<stdio.h>
int fun(int );
 int main()
{
    int x=0;
     fun(x);
}
int fun(int x)
{
    if(x!=10);
    {
    printf("hi\n");
    x++;
    fun(x);
    }
}
