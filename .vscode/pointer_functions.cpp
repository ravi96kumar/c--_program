#include<stdio.h>
int *fun(int,int);
void arr(int *);
int main()
{
    int x=20,y=30;
    int *sum;
    sum=fun(x,y);
    printf("sum=%d\n",*sum);
    int a[]={1,2,3,4,5};
   
    arr(a);
    int *p=a;
    for(int i=0;i<5;i++){
        printf("%d \t",*(p+i));
    }

}
int *fun(int a,int b)
{
    static int t;
    t=a+b;
    return &t;
}
void arr(int *a)
{
    
    for(int i=0;i<5;i++)
    {
        *(a+i)=10+i;
    }
    
}