#include<stdio.h>
int main()
{
    int a[10]={1,2,3,5,6,7,8,9,10,11};
    for(int i=0;i<10-1;i++)
    {
        if(a[i]!=a[i+1]-1)
        {
            printf("%d\n",a[i]+1);
            for(int m=i;m<10;m++)
            {
                a[m+1]=a[m]+1;
            }
            for(int n=0;n<10;n++)
            {
                printf("%d  ",a[n]);
            }
            return 0;
        }
    }
}