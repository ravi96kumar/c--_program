#include<stdio.h>
#include<string.h>
void upper(char [][10],int);

int main()
{
    int n,i,j;
    printf("enter the number of strings\n");
    scanf("%d",&n);
    char a[n][10],temp[10];
    for(i=0;i<n;i++)
    {
    printf(" enter the %d strings\n",i+1);
    scanf("%s",a[i]);
    }
    upper(a, n);
   for(i=0;i<n;i++)
    {
printf("%s  ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for( j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);

            }
        }
    }
    printf("the alphabetical order\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
        
    }
    return 0;
}
void upper(char a[][10], int n)
{
  int i, j;

  for(i = 0 ; i < n && a[i] != '\0' ; i++)
 {
    for(j = 0 ; j < 10 && a[i][j] != '\0' ; j++)
    {
        if(a[i][j] >= 'A' && a[i][j] <= 'Z')
        {
            a[i][j] += 32;
        }
    }
 }
 for(i=0;i<n;i++)
 {
    printf("%s  ",a[i]);
 }
}