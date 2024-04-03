#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r=3,c=3;
    int i,j;
    int **a=(int**)malloc(sizeof(int*)*r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
       // printf("enter the %d element = ",i+1);
        //scanf("%d",(*a)[i][j]/*(*(a+i)+j)*/);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",*(*(a+i)+j));
        }
    }

}