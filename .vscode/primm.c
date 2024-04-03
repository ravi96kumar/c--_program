#include<stdio.h>
int main()
{
    int i=1,j=2,count=0;
    int primecount=0;
    int primenotpcount=0;
    while(i<=100)
    {
        while(j<i)
         {
            if(i%j==0)
            {
                count++;
                break;
                
            }
            j++;
         }
         if(count==0 && i!=1)
         {
            printf("%d is a prime number\n",i);
            primecount++;
            j=2;
         }
         else
         {
            printf("%d is not a prime number\n",i);
            primenotpcount++;
            count=0;

         }
         i++;
        
    }
}