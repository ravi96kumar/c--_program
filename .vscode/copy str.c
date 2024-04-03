/*#include<stdio.h>
#include<cstring>
int main()
{
    char a[]="hello";
    char s[10];
    int i=0;
    while(a[i]!='\0')
    {
        s[i]=a[i];
        i++;
    }
    s[i++]='\0';
    printf("%s",s);

}*/
/*#include<stdio.h>
int main()
{
    char c[]="zero";
    char d[20];
    int i=0;
    while(c[i]!='\0')
    {
        d[i]=c[i];
        i++;
    }
    d[i++]='\0';
    printf("%s",d);
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="ram";
    char b[]="charan";
   // strcat(a,b);
    int i=0;
    int j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while (b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
        
    }
    a[i++]='\0';
    printf("%s",a);
    
    
}*/
/*#include<stdio.h>
int main()
{
 char c[15]="usha";
 char d[]="vijay";
 int i=0;
 int j=0;
 while(c[i]!='\0')
 {
    i++;
 }
 while(d[j]!='\0')
 {
    c[i]=d[j];
    i++;
    j++;
 }
 c[i++]='\0';
 printf("%s\n",c);   
}*/

/*#include<stdio.h>
int main()
{
    char s[14]="mani";
    char t[]="boss";
    int i=0;
     int j=0;
    while(s[i]!='\0')
    {
        i++;
    }
    while(t[j]!='\0')
    {
        s[i]=t[j];
        i++;
        j++;
    }
    s[i++]='\0';
    printf("%s",s);
}*/


/*#include<stdio.h>
void strcat_ur(char [],char []);
int main()
{
    char s[20]="we are";
    char t[]=" the best";
    strcat_ur(s,t);
}
void strcat_ur(char a[],char b[])
{
    int i=0;
     int j=0; 
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i++]='\0';
    printf("%s\n",a);
    
}*/


/*#include<stdio.h>
void strcpy_ur(char [],char []);
int main()
{
    char a[]="maniboss";
    char b[15];
    strcpy_ur(b,a);

}
void strcpy_ur(char s[],char t[])
{
    int i=0;
    while(t[i]!='\0')
    {
        s[i]=t[i];
        i++;
        
    }
    s[i++]='\0';
    printf("%s",s);
}*/



/*#include<stdio.h>
int main()
{
    char a[20]="usha";
    char b[20]="mani";
    int i=0;
    while(a[i]!='\0')
    {
        a[i]=b[i];
        i++;
    }    
   printf("%s",a);
}   */


#/*include<stdio.h>
void strcat_ur(char[],char[]);
int main()
{
    char m[15]="usha";
    char n[]="vijay";
    strcat_ur(m,n);
}
void strcat_ur(char a[],char b[])
{
    int i=0;
    int j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i++]='\0';
    printf("%s",a);
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{

    char d[10]="manivijay";
     int temp,j=0,len=0;
    len=strlen(d)-1;
    while(j<len)
    {
         temp=d[len];
        d[len]=d[j];
        d[j]=temp;
    j++;
    len--;
    }
    printf("%s",d);

}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="manibro";
    int temp,j=0,len=0;
    len=strlen(c)-1;
    while (j<len)
    {
        temp=c[len];
        c[len]=c[j];
        c[j]=temp;
        j++;
        len--;
    }
    printf("%s",c);
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="alltothebest";
    int temp,j=0,len=0;
    len=strlen(c)-1;
    while(j<len)
    {
      temp=c[len];
      c[len]=c[j];
      c[j]=temp;
      j++;
      len--;
    }
    printf("%s",c);
}*/


#include<stdio.h>
int strcomp(char a[],char b[]);
int main()
{
    int i=0;
    char a[10]="mani";
    char b[10]="mani";
    while(b[i]!='\0')
    {
        if(b[i]!=a[i])
        {
            return 1;
            {
                i++;
            }
            return 0;
        }
    }

}

    















