#include<stdio.h>
int main()
{
	int i,j;
	int a[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
    int m[3][3];
    int *q=&m[0][0];
    printf("enter array elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(*(m+i)+j));
        }
    }
	int *p=&m[0][0];
	for(i=0;i<9;i++)
	{
		
	
		*(p+i)=10+i;
		
		
	}
	for(i=0;i<9;i++)
	{
		/* if(i%5==0)
         {
            printf("\n");
         }*/
		printf("%d %d\n",*(p+i),(p+i));
	}
        return 0;
}