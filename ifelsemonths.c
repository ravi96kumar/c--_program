#include <stdio.h>
#include<time.h>
int main()
{
    int month;
    double time1=0,time2=0;
     
    /* Input month number from user */
   printf("Enter month number(1-12): ");
    scanf("%d", &month);
    clock_t tic1=clock();

    {
         if(month==1)
        {
            printf("january\n31 days");
         }
        else if(month==2)
        {
            printf("february\n31 days");
         }
        else if(month==3)
        {
            printf("march\n31 days");
         }
         else if(month==4)
        {
            printf("april\n31 days");
         }
         else if(month==5)
        {
            printf("may\n31 days");
         }
         else if(month==6)
        {
            printf("june\n31 days");
         }
         else if(month==7)
        {
            printf("july\n31 days");
         }
         else if(month==8)
        {
            printf("august\n31 days");
         }
         else if(month==9)
        {
            printf("september\n31 days");
         }
         else if(month==10)
        {
            printf("october\n31 days");
         }
         else if(month==11)
        {
            printf("november\n31 days");
         }
         else if(month==12)
        {
            printf("december\n31 days");
         }
        else 
            printf("Invalid input! Please enter month number between 1-12");

    }
    clock_t toc1=clock();
    time1=(toc1-tic1);
    printf("time taken for the execution of program using if else if=%lf clocks per seconds",time1);
       clock_t tic2=clock();
    
    switch(month)
    {
        case 1: 
            printf("january\n31 days");
            break;
        case 2: 
            printf("february\n28/29 days");
            break;
        case 3: 
            printf("march\n31 days");
            break;
        case 4: 
            printf("april\n30 days");
            break;
        case 5: 
            printf("may\n31 days");
            break;
        case 6: 
            printf("june\n30 days");
            break;
        case 7: 
            printf("july\n31 days");
            break;
        case 8: 
            printf("august\n31 days");
            break;
        case 9: 
            printf("september\n30 days");
            break;
        case 10: 
            printf("october\n31 days");
            break;
        case 11: 
            printf("november\n30 days");
            break;
        case 12: 
            printf("december\n31 days");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");

    }
    clock_t toc2=clock();
    time2=(toc2-tic2);
    printf("time taken for the execution of program using switch=%lf CLOCKS PER seconds",time2);
 
    return 0;
}