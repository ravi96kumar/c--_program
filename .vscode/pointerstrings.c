#include<stdio.h>
void stringrev(char *);
int main()
{
    char a[10]="ravi";
    char *mtr=a;
    stringrev(mtr);
    printf("\n%s\n",mtr);
}
void stringrev(char *ptr)
{
    char *dtr,temp;
    dtr=ptr;
    while(*ptr!='\0')
    {
        ptr++;
    }
    ptr--;
    while(dtr<ptr)
    {
        temp=*ptr;
        *ptr=*dtr;
        *dtr=temp;
        ptr--;
        dtr++;

    }
}