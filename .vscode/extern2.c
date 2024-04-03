#include<stdio.h>
#include "extern22.c"
int count;
extern void write_extern();
int main()
{
    count=5;
    write_extern();
    printf("\ncount is %d",count);
    return 0;
}