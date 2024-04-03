#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr="hello";
   // *ptr='A';
    printf("%s",ptr);
    printf("\n %s\n",++ptr);
    char a[]="hello";
    char *pqr=a;
    *pqr='A';
    printf("%s\n",pqr);
   const char *b[3]={"ram","raghu","raj"};
    for(int i=0;i<3;i++)
    printf("%s  ",b[i]);
    char c[]="hi";
    char d[]="gm";
    char *e[3]={a,d,c};
    printf("\n");
    for(int i=0;i<3;i++)
    printf("%s  ",e[i]);
    char x[5]="abcd";
    strcpy(x,"lmnop");
    char *y=x;
    printf("\n%s",y);
   // strcpy(y,"pqrs");
   y="pqrs";
    printf("\n%s",y);
   // int const *xyz="hello";
   // *xyz=20;
   //printf("\n%s")


}