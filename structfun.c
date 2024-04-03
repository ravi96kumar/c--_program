#include<stdio.h>
struct emp
{
    int id;
    float salary;
    char dept;
};
struct emp fun(struct emp,struct emp);
void main()
{
    struct emp E;
    struct emp E1={1,23435,'d'};
    struct emp E2={2,33333,'a'};
    E=fun(E1,E2);
}
struct emp fun(struct emp A,struct emp B)
{
    struct emp E3;
    E3.id=A.id+B.id;
    E3.salary=A.salary+B.salary;
    E3.dept=A.dept+B.dept;
    return E3;
 
};
