//#include<stdio.h>
//int main()
//{
  //  int i;
   // int num[5]={12,14,15,14,17};
    //for(i=0;i<5;++i)
   // {
   //     printf("%d  %d   %d   %d \n",num[i],&num[i],*(num+i),(num+i));
    //}
//}


#include<stdio.h>
int main()
{
    int m;
    int num[3]={1,2,3,};
    for(m=0;m<3;m++)
    {
     //printf("%d\n",num[m]);
     printf("enter the value");
     scanf("%d",&num[m]);
     printf("%d ,%d, %d\n",num[m],&num[m],*(num+m));
    }
}