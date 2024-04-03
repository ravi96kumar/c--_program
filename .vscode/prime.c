#include<stdio.h>
int main()
{
    int i=1,j=2,count=0;
    int primecount=0;
    int notprimecount=0;
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
            printf("%d is a prime\n",i);
            primecount++;
            j=2;
        }
        else
        {
            printf("%d is not a prime\n",i);
            notprimecount++;
            count=0;
        }
    }


}