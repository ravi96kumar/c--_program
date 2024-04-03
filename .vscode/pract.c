/*#include<stdio.h>
int main()
{
    int num=-7;
    if(num%2==0)
    printf("%d is even",num);
    else
    printf("%d is odd",num);
    return 0;

}

{
    int num=5;
    (num%2==0)?printf("%d is even",num):printf("%d is odd",num);//ternary operator
    return 0;
}*/



/*#include<stdio.h>
int main()
{
    int n=27,i=2, count=0;
    if(n==0||n==1)
    count=1;
    for(i=2;i<=n;i++){
    
        if(n%i==0)
        {
        count=1;
        break;
        }
    

}
if(count==0)

printf("%d is prime no",n);
else
printf("%dis not prime ",n);
return 0;
}*/



/*#include<stdio.h>
int main()
{
    int n=9;
    for( int i=1;i<=8;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);

    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n=6,range=16;
    for(int i=1;i<=range;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}*/



#include<stdio.h>
int main()
{
    int i=1,j=2,count=0;
    int primenumber=0;
    int nprimenumber=0;
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
            printf("%d is prime\n",i);
            primenumber++;
            j=2;
        }
        else
        {
            printf("%d is not prime\n",i);
            nprimenumber++;
            count=0;
        }
    }
}




