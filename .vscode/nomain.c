/*#include<stdio.h>
extern void _exit(register int);
int _start()
{
printf("\n program without main\n");
_exit(0);
}*/
/*#include<stdio.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define begin decode(a,n,i,m,a,t,e)
#define mkstr(s) #s
#define count(x,y) x##y
int begin()

{
    int xy=20;
printf("\n hello \n");
printf(mkstr(hello good morning\n));
printf("value=%d",count(x,y));
}*/
#include<stdio.h>
int var=20;
void fun();
int main()
{
   int var=var;
   int a=a;
   printf("%d",var);
   fun();
   return 0;

}
void fun()
{
    int var=var;
    int a=a;
    printf("\n%d",var);
    printf("\n%d",a);
    printf(" \n");
}