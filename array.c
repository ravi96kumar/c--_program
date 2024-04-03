#include<stdio.h>
float e[]={12,3,33,44,55,22,2};
int t[12];
void fun(int [][2],int [][2]);
int main()
{
    int i;
    int a[10];
    int p[2][2]={{1,2},{3,4}};
    int q[2][2]={{2,3},{3,2}};
   /* for(int i=0;i<5;i++)
    {
        printf("\nenter the %d element of array=",i);
        scanf("%d",&a[i]);

    }
    for(int i=0;i<10;i++)
    {
        printf("\n a[%d] = %d and address =%d",i,a[i],&a[i]);

    }*/
    printf("\n %lu %lu",sizeof e,sizeof t);
    printf("\n");
    fun(p,q);
    return 0;

}
void fun(int p[][2],int q[][2])
{
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
        printf("%d ",p[i][j]);
    }
    printf("\n");
  }
}