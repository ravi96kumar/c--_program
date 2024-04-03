#include<stdio.h>
#include<time.h>
void main()
{
    int a=10;
    int b=20;
    clock_t tic=clock();
    a+=b;
    b+=a;
    clock_t toc=clock();
    int z=toc-tic;
    printf("z=%d\n",z);
    clock_t tic1=clock();
    a=a+b;
    b=b+a;
    clock_t toc1=clock();
    int y=toc1-tic1;
    printf("y=%d",y);
}