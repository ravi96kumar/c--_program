#include<stdio.h>
#include<malloc.h>
int main()
{
    int n=3;
    int *ptr=(int *)malloc(sizeof(int)*15);
    int *qtr=(int*)malloc(sizeof(int)*n);
    printf("%p\n",ptr);
    printf("%p\n",qtr);
    if(ptr!=NULL)
    {
       for(int i=0;i<15;i++)
    {
        *(ptr+i)=10+i;
    }  
    }
    if(qtr!=NULL)
    {
        *qtr=111;
        *(qtr+1)=222;
        *(qtr+2)=333;
    }
    for(int i=0;i<15;i++)
    {
        printf("%d \t %p\n",*(ptr+i),(ptr+i));
    }
     for(int i=0;i<n;i++)
    {
        printf("%d\n",*(qtr+i));
    }
    free(ptr);
   /* *ptr=100;
    printf("%d\n",*ptr);*/
}