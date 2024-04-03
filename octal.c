#include<stdio.h>
void main()
{
    long int rem[50],num,length=0,i=0;
    printf("enter the decimal number");
    scanf("%ld",&num);
    while(num>0)
    {
         rem[i]=num%8;
        num=num/8;
        i++;
        length++;
    }
    printf("the octal number is");
     for(i=length-1;i>=0;i--)
    {
     printf("%ld",rem[i]);
    }
    
}