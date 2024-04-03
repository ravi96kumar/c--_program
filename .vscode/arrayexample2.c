#include<stdio.h>
void copy(int[],int [],int,int);
void add(int,int);
int main()
{
    int a[5]={8,9,3,4,5};
    int b[5]={1,2,3,4,5};
    int n=5,p=5,q=6;
   // int c[n];
    copy(a,b,p,q);
    add(p,q);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
void copy(int d[],int b[],int y,int z)
{
    
    int i=0;
    while(i<5)
    {
        d[i]=b[i];
        i++;
    }
    y=y+z;
}
void add(int y,int z)
{
    y=y+z;
}