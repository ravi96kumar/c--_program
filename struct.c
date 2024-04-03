struct point
{
    int x,y;
    int sum,sub,product,rem;
    int division;
};
#include<stdio.h>
int add(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);
int remaind(int,int);
int main()
{
    struct point p1;
    printf("enter the  x and y value\n");
    scanf("%d%d",&p1.x,&p1.y);
   // p1.x=20;
    printf("x=%d \n y=%d\n",p1.x,p1.y);
   p1.sum=add(p1.x,p1.y);
   printf("the sum of p1.x and p1.y=%d\n",p1.sum);
   p1.sub=subtraction(p1.x,p1.y);
    printf("the subtraction of p1.x and p1.y=%d\n",p1.sub);
     p1.product=multiplication(p1.x,p1.y);
    printf("the multiplication of p1.x and p1.y=%d\n",p1.product);
     p1.division=division(p1.x,p1.y);
    printf("the quotient of p1.x and p1.y=%d\n",p1.division);
     p1.rem=remaind(p1.x,p1.y);
    printf("the remainder of p1.x and p1.y=%d\n",p1.rem);
    printf("size of structure point is %ld",sizeof(p1));
    return 0;

}
int add(int a,int b)
{
    int z=a+b;
    return z;
    
}
int multiplication(int a,int b)
{
    int f=a*b;
    return f;
}
int subtraction(int a,int b)
{
    int e=a-b;
    return e;
    
}
int division(int a,int b)
{
    int d=a/b;
    return d;
    
}
int remaind(int a,int b)
{
    int c=a%b;
    return c;
    
}