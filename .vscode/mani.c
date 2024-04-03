#include<stdio.h>
#include<string.h>
int main()
{
    char a[15]="mani";
    char b[]="vijay";
    strcat (a,b);
    int i=0;
    int j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i++]='\0';
    


}