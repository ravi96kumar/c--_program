#include<stdio.h>
#include<string.h>
void mystrlwr(char[]);
int main()
{
    char a[50]="dmsdnnsdhjppwqwABXDDm";
    mystrlwr(a);
    int len=strlen(a);
    int i=0,temp;
    for(i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
           if(a[i] > a[j])
           {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;

           }
        }
    }
    printf("%s",a);

}
void mystrlwr(char str[40])
{
 int i;
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]>='A'&& str[i]<='Z')
  {
   str[i] = str[i]+32;
  }
 }
}