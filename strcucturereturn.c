#include<stdio.h>
struct A
{
    int a;
    int b;
    int c;
};
struct A fun();
int main()
{
    struct A a={12,13,14};
   struct A b={1,2,3};
   struct A c=fun();
   printf("%d %d %d",c.a,c.b,c.c);
   
    
}
struct A fun()
{
    struct A g={22,33,44};
   // printf(" %d %d %d",e.a,e.b,e.c);
    //printf("%d %d %d",d.a,d.b,d.c);
    return g;


}