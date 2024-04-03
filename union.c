#include<stdio.h>
union emp
{
    int x;
    char y;
};
void main()
{
    union emp E;
    E.x=20;
    E.y='a';
    printf("E.x=%d",E.x);
    printf("E.y=%d",E.y);
    int s=sizeof(E);

}