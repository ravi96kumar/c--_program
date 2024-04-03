struct emp
{
int id;
float salary;
char dept;
}E={2,25000,'d'};
#include<stdio.h>
struct emp S={1,134545.00,'a'};
void main()
{
int x;
struct emp X={3,69995,'f'};
printf("enter the x value\n");
scanf("%d",&x);
//printf("enter the value of employee x details\n empid=");
//scanf("%d",&X.id);
//printf("enter the value of employee x details\n emp salary=");
//scanf("%f",&X.salary);
//printf("enter the value of employee x details emp dept=");
//scanf("%c",&X.dept);
//printf("enter the value of employee S details\n empid=");
//scanf("%d",&S.id);
//printf("enter the value of employee S details\n emp salary=");
//scanf("%f",&S.salary);
//printf("enter the value of employee S details emp dept=");
//scanf("%c",&S.dept);
//printf("enter the value of employee E details\n empid=");
//scanf("%d",&E.id);
//printf("enter the value of employee E details\n emp salary=");
//scanf("%f",&E.salary);
//printf("enter the value of employee E details emp dept=");
//scanf("%c",&E.dept);
printf("employee X detils\n");
printf("id=%d\n salary=%f\ndept=%c\n",X.id,X.salary,X.dept);
printf("employee E detils\n");
printf("id=%d\n salary=%f\ndept=%c\n",S.id,S.salary,S.dept);
printf("employee E detils\n");
printf("id=%d\n salary=%f\ndept=%c\n",E.id,E.salary,E.dept);
}


