#include<stdio.h>
#define size 7
void binarysearch(int a[],int n,int pos)
{
    int mid;
    mid=n/2;
    if(pos<a[mid])
    {
        for(int i=0;i<mid;i++)
        {
            if(pos==a[i])
            {
                printf("\n position of element of %d is %d\n",pos,i);
            }
        }
    }
    else
    {
        for(int i=mid;i<n;i++)
        {
            if(pos==a[i])
            {
                printf("\n position of element of %d is %d\n",pos,i); 
            }
        }

    }
 
}
int main()
{
    int pos;
    int a[size]={11,22,33,44,55,66,77};
    int n=size;
    printf("enter the element to search\n");
    scanf("%d",&pos);
    binarysearch(a,n,pos);
}