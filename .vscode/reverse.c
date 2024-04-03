#include<stdio.h>
void reverse();
int main()
{
    
    reverse();
}
    void reverse()
    {
        int num=899;
    int original=num;
    int rev=0,sum=0,rem=0;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    printf("%d\n ",rev);
    if(original==rev)
    {
        printf(" %d is a palindrome",rev);
    }
    else
    {
        printf("%d is not palindrome",rev);
    }
}