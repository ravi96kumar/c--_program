#include<stdio.h>
#include "extern.h"
extern int x;
int main()
    {
        
        printf("%d\n",x);
        fun(x);
        return 0;
    }
 extern void fun(int a)
{
    x=a+20;
    printf("%d",x);
}