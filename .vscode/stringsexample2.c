#include<stdio.h>
int main()
{
    char a[50]="every thing 322 i#s*po)ss/i)ble))";
    int i=0,j=0;
    for(i=0;a[i]!='\0';i++)
    {
    while(!(a[i]>='a' && a[i]<='z') && !(a[i]>='A' && a[i]<='Z')&& (a[i]!='\0'))
    {
        for(j=i;a[j]!='\0';++j)
        {
            a[j]=a[j+1];
        }
        a[j]='\0';
    }
    }
    printf("%s",a);

}