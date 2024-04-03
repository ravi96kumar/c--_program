#include<stdio.h>
int find(int n);
int main()
{
    int n,x;
    printf("enter the decimal  number=");
    scanf("\n%d",&n);
    x=find(n);
    printf("\n %d",x);
    return 0;
}
int find( int n)
{
    if(n==0)
    return 0;
    else
    return (n%2+10*find(n/2));
}