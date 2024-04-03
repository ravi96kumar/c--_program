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
struct emp x[3]={{100 ,'a',2000.00},{133,'d',300.00}};
fun(x);

}
void fun(struct emp y[2])
{
    for(int i=0;i<2;i++)
    {
        printf("%d,%c,%f\n",y[i].id,y[i].sec,y[i].sal);
        
    }

}
