#include<stdio.h>
void main()
{
    int n1,n2,max=0;
    printf("enter the two numbers");
    scanf("%d%d",&n1,&n2);
    max=(n1>n2)? n1:n2;
    while(1)
    {
        if(max%n1==0 && max%n2==0)
        {
            printf("the lcm of %d and %d is %d",n1,n2,max);
            break;
        }
        ++max;
    }
}
