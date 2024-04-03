#include<stdio.h>
struct emp
{
    int id;
    char sec;
    float sal;
};
void fun(struct emp[]);
int main()
{
    struct emp f[2]={{200,'g',2000.00},{100,'k',3000.00}};
    fun(f);
}
void fun(struct emp g[2])
{
for(int i=0;i<2;i++)
{
    printf("%d,%c,%f\n",g[i].id,g[i].sec,g[i].sal);
    printf("%d\n",sizeof (g));
}

}
