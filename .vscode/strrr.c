/*#include<stdio.h>
void strcpy_ur(char[],char[]);
int main()
{
    char a[]="all the best";
    char b[20];
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
}*/

/*#include<stdio.h>
void strcpy_ur(char[],char[]);
int main()
{
    char s[]="bethebest";
    char t[14];
    
    strcpy_ur(t,s);

}
void strcpy_ur(char a[],char b[])
{
        int i=0;
    while(b[i]!='\0')
    {
        a[i]=b[i];
        i++;
    }
    a[i++]='\0';
    printf("%s",a);
}*/

#include<stdio.h>
void strcpy_ur(char[],char[]);
int main()
{
    char a[]="sheisdead";
    char b[12];
    strcpy_ur(b,a);
}
void strcpy_ur(char a[],char b[])
{
    int i=0;
    while(b[i]!='\0')
    {
        a[i]=b[i];
        i++;
    }
    a[i++]='\0';
    printf("%s",a);
}