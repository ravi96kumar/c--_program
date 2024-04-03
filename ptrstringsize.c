#include<stdio.h>
#include<string.h>
#define ADD(x,y) x+y
#define MAX 1
int main()
{
   #if MAX
   
  
    int len=0;
    char *ptr[4]={"ravi","rakesh","ramesh","raviqwqwq"};
    printf("\n ptr[0]= %p",ptr[0]);
     printf("\n ptr[1]= %p",ptr[1]);
      printf("\n ptr[2]= %p",ptr[2]);
       printf("\n ptr[3]= %p",ptr[3]);
       for(int i=0;i<4;i++)
       {
        len=len+strlen(ptr[i]);
       }len=len+4;
       printf("\n%d",len);
 #endif
   #ifdef DEBUG
     int m=ptr[3];
     int n=ptr[0];
    int c=m-n;
    printf("\n %d",c);
    printf("%lu",sizeof(*ptr));
    char a[4][10]={"ravi","rakesh","ramesh","ravi"};
    printf("\n%lu",sizeof(a));
    int d=ADD(10,20);
   printf("\n%d\n",d);
#endif


}