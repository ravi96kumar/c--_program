#include<stdio.h>
struct emp
{
    int x:5;
    int y:20;
    int c:7;
};
void main()
{
    struct emp E;
    E.x=8;
    E.y=200;
    E.c=31;
    int a=sizeof(E);
    printf("the size of structure with padding is %d",a);

}