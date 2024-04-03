#include<stdio.h>
struct stu
{
    int id;
    char sec;
    float fees;

};
int main()
{
    struct stu u{2000,'d',3000.00 };
    printf("%d,%c,%f\n",u.id,u.sec,u.fees);
    return 0;

}