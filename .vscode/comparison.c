#include<stdio.h>
int main()
{
    char a[12]="ma";
    char b[]="boss";
    int i=0;
    for(i=0;i<=11;i++)
    {
        (a[4+i]=b[i]);
    }
    printf("%s",a);
}