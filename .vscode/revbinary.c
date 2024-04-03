#include<stdio.h>
int dectobinary();
int reverse();
int main()
{
    int t;
    t=reverse();
    printf("the reverse number is %d",t);
    return 0;
}
int reverse()
{
    int n,rev=0,r,p;
    printf("enter the number\n");
scanf("%d",&n);
while(n>0)
{
    r=n%10;
    rev=rev*10+r;
    n/=10;
}
p=dectobinary(rev);
printf("the binary number is %d",p);
return rev;

}
int dectobinary(int rev)
{
    int i,k;
    for(i=8;i>=0;i--)
    {
        k=rev>>i;
        if(k&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return k;
}
