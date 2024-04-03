#include<stdio.h>
int main()
{
    char s[]="welcometohelloworld";
    int i,len;
     len =0;
     i=0;
    while (s[i]!='\0')
    {
        len++;
        i++;
    }
    printf("%d",len);
}