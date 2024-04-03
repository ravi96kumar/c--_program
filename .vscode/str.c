#include<stdio.h>
struct emp
{
    int id;
    char sec;
    float sal;

};
int main()
{
    struct emp E {12,'a',1000.00};
    printf("%d,%c,%f\n",E.id,E.sec,E.sal);
    return 0;

}