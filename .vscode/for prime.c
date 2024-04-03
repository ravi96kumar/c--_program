#include<stdio.h>
int main()
{
    int i=1,j=2,count=0;
    int primecount=0;
    int primenotcount=0;
    for(i=1;i<=100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
            
            
        }
        if(count==0 && i!=1)
        {
            printf("%d is a prime number\n",i);
            primecount++;
            j=2;
        }
        else
        {
            printf("%d is not prime number\n",i);
            primenotcount++;
            count=0;
        }
        
        

    }
}