#include<stdio.h>
#include<malloc.h>
int main()
{
    int n=3,m=4,p=2;
    int *ptr=(int*)malloc(sizeof(int)*n);
    if(ptr!=NULL)
    {
        *ptr=12;
        printf("%p\n",ptr);
       // int t=ptr;
        *(ptr+1)=13;
        *(ptr+2)=14;
       // ptr=(int*)realloc(ptr,0);
    }
   /* printf("%d\t%p\n",*ptr,ptr);
    ptr--;
    printf("%d\t%p\n",*ptr,ptr);
    ptr--;
    printf("%d\t%p\n",*ptr,ptr);*/
    //free(ptr);
  // * ptr=100;
   printf("%p",ptr);
//int *mtr=(int*)malloc(sizeof(int)*m*p);
//free(mtr);
}