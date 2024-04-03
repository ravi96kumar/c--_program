#include<stdio.h>
#include<malloc.h>
void display();
int main()
{
    printf("first loop\n");
    display();
    printf("second loop\n");
    display();
}
void display()
{
    int m,n;
    printf("enter the n value=");
    scanf("%d",&n);
    int *ptr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        *(ptr+i)=100+i;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \t%p\n",*(ptr+i),(ptr+i));
    }
    printf("\n enter the realloc size-");
    scanf("%d",&m);
    ptr=(int*)realloc(ptr,m);
    for(int i=0;i<m;i++)
    {
        *(ptr+i)=100+i;
    }
     for(int i=0;i<m;i++)
    {
        printf("%d \t%p\n",*(ptr+i),(ptr+i));
    }
    free(ptr);
    ptr=NULL;
}