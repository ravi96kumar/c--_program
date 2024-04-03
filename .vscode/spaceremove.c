#include<stdio.h>
#include<string.h>
#define max 30
int main()
{
    char a[max];
    printf("\n enter the string =  ");
    gets(a);
    int i;
    int len=strlen(a);
  printf("length =%d",len);
   for(i=0;i<len;i++)
    {
        if(a[i]==' ')
        {
        for(int j=i;j<len;j++)
        {
            a[j]=a[j+1];
        }
        len--;
        }

    }
    printf(" \nthe string without space = %s",a);
}