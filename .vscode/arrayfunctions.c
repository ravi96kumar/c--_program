#include<stdio.h>
void fun(int[]);
int main()
{
    int a[5]={1,2,3,4,5};
    fun(a);
    return 0;

}
void fun(int s[])
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",s[i]);
    }
}