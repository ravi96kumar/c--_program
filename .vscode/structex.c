#include<stdio.h>
struct emp
{
    int id;
    float sal;
    char name;
    struct dob
    {
        int dd;
        int mm;
        int yy;
    }d;
    struct dob s;
}g;
struct emp a={12,345.4,'e',{12,12,2020}};
struct emp fun(struct emp,struct emp);
int main()
{
    struct emp e={12,2345.4,'c'};
    
    e.d.dd=12;
    e.d.mm=12;
    e.d.yy=2022;
    g=fun(a,e);
    printf(" %d  %f   %c ",g.id,g.sal,g.name);
    return 0;
}
struct emp fun(struct emp c,struct emp d)
{
   struct emp h;
   h.id=c.id+d.id;
   h.sal=c.sal+d.sal;
   h.name='c';
   
   printf(" %d %d %d",a.d.dd,a.d.mm,a.d.yy);
   return h;
}

