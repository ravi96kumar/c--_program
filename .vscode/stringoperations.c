#include<stdio.h>
#include<string.h>
int strlenur(char []);
void stringcopy(char [],char []);
void strconcat(char[],char[]);
void strrev(char[]);
int strcompare(char[],char[]);
void reverse(char[],char[]);
int main()
{
    char rev[20];
   char a[20]="hello";
   char str[20];
   char b[20]="goodmorning";
   int len=strlenur(a);
   printf("the length=%d\n",len);
   stringcopy(str,a);
   strconcat(a,b);
   printf(" concated  string %s \n",a);
   strrev(b);
   reverse(a,rev);
   printf("\n%s",rev);
 int c= strcompare(a,b);
 if(c==0)
 {
    printf("\n strings are same\n");
 }
 else{
    printf("\n strings are not same\n");
 }
}
int strlenur(char a[])
{
    int i=0,length=0;
    while(a[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}
void stringcopy(char str[],char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        str[i]=a[i];
        i++;
    }
    str[i]='\0';
    printf("copied string is %s\n",str);
}
void strconcat(char a[],char b[])
{
    int len=0,i=0;
    len=strlenur(a);
    while(b[i]!='\0')
    {
        a[len+i]=b[i];
        i++;
    }
    a[len+i]='\0';
    printf(" the concated string is %s\n",a);
}
void strrev(char b[])
{
    int j=0,i=0,temp;
    j=strlenur(b)-1;
    while(i<j)
    {
       temp=b[j];
       b[j]=b[i];
       b[i]=temp;
       i++;
       j--;
    }
    printf("the reverse string is %s",b);
}
int strcompare(char a[],char b[])
{
    int i=0;
    while(a[i] == b[i] && a[i]!='\0')
    {
       
        i++;
    }
    return (a[i]-b[i]);
}
void reverse(char a[],char rev[])
{
  int j=0;
  int len=strlenur(a)-1;
  while(len>=0)
  {
    rev[j]=a[len];
    j++;
    len--;
  }
  rev[j]='\0';
  printf("\n%s",rev);
}