#include<stdio.h>
int main()
{
    int i,j;
    int a[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
    //printf("%d"*(*(a+i)+j));
    printf("%d"&"%d",&a(i)(j),(*(a+i)+j));
    };