#include<stdio.h>
void strcpy_ur(char[],char[]);
int main()
{
    char a[]="maniboss";
    char b[15];
    strcpy_ur(a,b);

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
