#include<stdio.h>
int main()
{
    int i,j,k,r1,c1,r2,c2,r,c;
    printf("enter the number of rows in A matrix ");
    scanf("%d",&r1);
    printf("enter the number of columns in A matrix ");
    scanf("%d",&c1);
    int a[i][j],b[i][j],mul[i][j];
    printf("entern the a mtrix elements \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
              scanf("%d",&a[i][j]);
        }
    }
     printf("enter the number of rows in B matrix ");
    scanf("%d",&r2);
    printf("enter the number of columns in B matrix ");
    scanf("%d",&c2);
    printf("enter the second matrix elements\n");
    for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    if(c1==r2)
    {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<r2;k++)
            {
                
                   mul[i][j]+=a[i][k]*b[k][j];
                
            }
        }
    }
    printf("matrix A\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix B\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("the multiplication matrix is mul[%d][%d]=\n",r1,c2);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    } 
    else
    {
        printf("rows not equal to columns");
    }  
}