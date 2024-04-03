#include<stdio.h>
#pragma pack(3)
#include<time.h>
void main()
{

    clock_t tic=clock();
    printf("the starting time %ld\n",tic);
    int i=10;
    int j=0;
    struct emp
    {
        int m;
        double adh;
        int id;
        double pan;
        int salary;
        char dept;
    
    }E;
    E.dept='c';
    E.id=1;
    E.salary=25000;
    struct emp E2={123555,2,3654,25000,'A'};
    j=sizeof(E);
    clock_t toc=clock();
    printf("the ending time is %ld\n",toc);
    long double f=(toc-tic);
    printf("process time taken is =%Lf clocks per seconds \n",f);
    printf("size of structure %d",j);
}
