#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
  //  printf(" a=%d  &a=%d a[0]=%d\n",(a+0),&a,&a[0]);
    for(int i=0;i<5;i++)
    {
     //   printf("a[%d]=%d pointer %d=%d address=%d\n",i,a[i],i,*(a+i),*(&a[i]));
    }
   // printf("address %d\n",&a[1-1]);
   // printf(" address %d\n",(a-1));
  //  printf("address=%d",&a+1);
    int *ptr=a;
    printf("%p",ptr);
    ptr++;
    printf("\n%p",ptr);


}