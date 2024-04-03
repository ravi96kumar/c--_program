#include<stdio.h>
int main()
{
    int no[10]={2,5,5,5,3,5,3,5,5,5};
    int i,j,size=10,temp;
    for(i=0;i<size;i++)
    {
        printf("%d \t",no[i]);
    }
    printf("\n duplicate elemets in array\n");
    for(i=0;i<size;i++)
    {
        temp=no[i];
        for(j=i+1;j<size;j++)
        {
            if(no[i]==no[j] && no[i] !=0)
            {
                no[i]=0;
                printf("%d\n",temp);
            }
            else if(temp == no[j])
            {
                no[j]=0;
            }
        }
    }
    printf("array elements are");
    for(i=0;i<size;i++)
    {
        printf("%d ",no[i]);
    }
    return 0;
}