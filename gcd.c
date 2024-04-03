#include<stdio.h>
void fun();
int main()
{
    fun();
}
void fun()
{
    int n,i,range;
    printf("enter integer num");
    scanf("%d",&n);
     do{
    printf("enter an range (positive num)");
    scanf("%d",&range);
     } while(range <=0);
     for(i=1;i<=range;++i)
{
    printf("%d*%d=%d\n",n,i,n*i);
}

}
















