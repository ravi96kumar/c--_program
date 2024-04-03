#include<stdio.h>
int main()
{
    int i=1,j=2,count=0;
    int primecount=0;
    int notpcount=0;
        
   {
    //printf("enter the number\n");
    //scanf("%d",&i);
    while(i<=100)
  //for(i=1;i<=100;i++)
   {
   //for(j=2;j<i;j++)
   while(j<i)
    {
        if(i%j==0)
        {
            count++;
            break; 
        }
       ++j;
    }
        if(count==0 && i!=1)
        {
            printf(" %d is prime\n",i);
            primecount++;
            j=2;
            
        }
        else
        {
            printf("%d is not a prime number\n",i);
            notpcount++;
            count=0;
        
        }
       ++i;

    }
   }     
printf("%d no of prime numbers\n",primecount);
printf("%d no of  non prime numbers\n",notpcount);
    
}

