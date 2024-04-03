#include<stdio.h>
void main()
{
    int num,rev=0,rem,sum=0,temp;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        rev=rev*10+rem;
        num=num/10;
    }
    temp=printf("the reverse of number is =%d",rev);
    printf("\n the sum of digits of a number is =%d",sum);
    printf("\n the number of characters in printf is %d",temp);
}
