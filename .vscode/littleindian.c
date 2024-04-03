#include<stdio.h>
int main()
{
    int a=255;
    char *b=(char*)(&a);
    if(*(b))
    {
        printf("little endian");
    }
    else
    {
        printf("big endian\n");
    }
}