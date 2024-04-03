#include<stdio.h>
static int count=0;
int inccount()
{
    int count=0;
    count++;
    return count;
}
int main()
{
    char name1[10];
    scanf("%s",name1);
    printf("%d\n",inccount());
     char name2[10];
    scanf("%s",name2);
    printf("%d\n",inccount());

}