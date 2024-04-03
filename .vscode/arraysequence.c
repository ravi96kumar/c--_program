#include<stdio.h>
int main()
{
    int i,j,k,m;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=i;k<3;k++)
            {
                for(m=j;m<3;m++)
            {
            if(a[k][m]*a[i][j]==9)
            {
                printf("%d %d\n",a[k][m],a[i][j]);
            }
            }
            }
        }
    }

}