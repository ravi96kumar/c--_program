#include<stdio.h>
void display();
int main()
{
    struct emp
    {
        int x;
        float y;

    };
    struct emp e;
    e.x=12;
    e.y=23.85;
     printf("%d %f",e.x,e.y);
    //display();
}
/*void display()
{
    struct emp a;
    a.x=12;
    a.y=12;
    printf("%d %f",a.x,a.y);
}*/