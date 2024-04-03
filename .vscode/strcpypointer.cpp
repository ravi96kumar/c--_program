#include<stdio.h>
void strcopy(char *,char *);
int main()
{
    char a[]="hello";
    char b[10];
    strcopy(b,a);
//  printf("%s\n",b);
}
void strcopy(char *btr,char *atr)
{
    /*while(*atr!='\0')
    {
        *btr=*atr;
        btr++;
        atr++;
    }
    *btr='\0';
    printf("%s\n",btr);*/
    int i=0;
    while(*(atr+i)!='\0')
    {
        *(btr+i)=*(atr+i);
        i++;
    }
    *(btr+i)='\0';
    printf("%s\n",btr);
}