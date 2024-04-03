#include<stdio.h>
struct emp
{
    char name;
    int id[2];
    float sal;
};
int main()
{
    struct emp e[2]={{'a',{1,2},1234.5},{'b',{3,4},2345.6}};
    for(int i=0;i<2;i++)
    {
        printf("name=%c \t  salary=%f \t",e[i].name,e[i].sal);
        for(int j=0;j<2;j++)
        {
          printf("id=%d\n",e[i].id[j]);
        }
    }
}