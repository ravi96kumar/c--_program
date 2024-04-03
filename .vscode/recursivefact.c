#include<stdio.h>
int fact(int);
int main()
{
    int n=5;
    int factorial=fact(n);
    printf("%d\n",factorial);

}

int fact(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * fact(n-1));  
}  