#include<stdio.h>
int num=75;
void display();
int main()
{
   /* extern*/ int num;
    printf(" num %d",num);
    display();
    return 0;
}
void display()
{
   /* extern*/ int num;
    printf("\n num %d",num);
}