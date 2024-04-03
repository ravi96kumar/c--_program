#include<stdio.h>
void main()
{
    int i,j,r,c,a[r][c];
    printf(" enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("enter the matrix elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf(" the array elemenys are\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}