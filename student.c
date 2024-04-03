struct student
{
int id;
float fee;
};
#include<stdio.h>
void main()
{
struct student s={124,23655};
printf("%d %f",s.id,s.fee);
}
