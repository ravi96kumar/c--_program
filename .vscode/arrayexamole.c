#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("the elements are ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
    printf("\nrepeating elements are\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(a[i]==a[j])
          {
            int k=a[j];
            if(k==)
            printf("\n%d",a[i]);
          }
        }
    }
    
 return 0;
}
