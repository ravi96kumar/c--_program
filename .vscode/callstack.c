#include<stdio.h>
void fun(int);
int main()
{
    int x=1234;
    fun(x);
    return 0;
}
void fun(int x)
{
 /*  if(x<5)
   {
    x++;
     fun(x);
    printf("\n%d",x);
   
   }*/
   int r;
   if(x!=0)
   {
      r=x%10;
      fun(x/10);
      printf("%d\n",r);
   }
   
}
