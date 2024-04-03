#include<stdio.h>
/*struct emp
{
  // static int id1;
   const float sal;
    int id;
    char name;
}e4={12333,1,'e'};
//int emp::id1
struct emp fun(struct emp);
int main()
{
 const static struct emp e2={12345,1234,'e'};
  //  struct emp e2;
  //e2=fun(e1);
  printf("%d %f %c",e2.id,e2.sal,e2.name);
 printf("%d",sizeof(e2));
}
struct emp fun(struct emp e1)
{
    struct emp e3;
    //e3.id=e1.id;
   // e3.sal=e1.sal;
    e3.name=e3.name;
    return e3;
}*/
int main()
{
    int a=1;
    int b;
   // b=++a - ++a + a++ + a++ + a++;
    b=++a;
    b=b- ++a;
    b=b+ a++;
    b=b + a++;
    b=b + a++;
    printf("\n%d\n",b);
}