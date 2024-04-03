#include"fil.h"
int main()
{
    display();
}
int display()
{
    printf("helllo world\n");
    sum(10,20);
    mul(2,10);
    return 0;
}

void sum(int x,int y)
{
    int z;
    z=x+y;
    printf("%d\n",z);
}


void mul(int a,int b)
{
    int c;
    c=a*b;
    printf("%d\n",c);
}



