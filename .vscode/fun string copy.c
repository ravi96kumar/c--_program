/*#include<stdio.h>
void strcpy_ur(char[],char[]);
int main()
{
    char x[]="manivinay";
  char y[13];
  strcpy_ur (y,x);
}
void strcpy_ur(char s[],char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        s[i]=a[i];
        i++;
    }
    s[i++]='\0';
    printf(" %s",s);
}*/

#include<stdio.h>
void strcpy_ur(char[],char[]);
int main()
{
    char a[]="maniboss";
    char b[15];
    strcpy_ur(b,a);

}
void strcpy_ur(char x[],char y[])
{
    int i=0;
    while(y[i]!='\0')
    {
        x[i]=y[i];
        i++;
    }    
     x[i++]='\0';
     printf("%s",x);
    
}
