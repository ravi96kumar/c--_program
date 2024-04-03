#include<stdio.h>
int mul();
int main()
{
    mul();
}
int mul(){
int n,i;
printf("enter an integer");
scanf("%d",&n);


for(i=1;i<=10;i++)
{
    printf(" %d*%d=%d\n ",n,i,n*i);
}
return 0;

}






    


