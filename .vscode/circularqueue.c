#include<stdio.h>
#include<stdlib.h>
#define max 5
int q[max];
int f=-1;
int r=0;
int count=0;
void insert(int);

int delete();
void display();

enum stack{inser=1,delt,Display,Exit};
int main()
{
    int ch,item,del;
    while(1)
    {
        printf("\n 1-insert \t 2-delete \t 3-DISPLAY \t 4-EXIT");
    printf("\nenter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case inser:
        {
            printf("\nenter the element\n");
            scanf("%d",&item);
            insert(item);
        }
        break;
        case delt:
        {
          int del=delete();
           printf("\n deleted item is %d",del);
        }
        break;
        case Display: 
        {
            display();
        }
        break;
        case Exit:  
        {
            exit(0);
        }
        break;
        default:
        {
            printf("\n invalid input");
        }break;
    }
    }
}
void insert(int item)
{
    if(count==max)
    {
        printf("\n queue overflow");
    }
    else
    {
        count++;
        f=(f+1)%max;
        q[f]=item;
    }
}
int delete()
{
    int del;
   if (count==0)
    {
        printf("\n queue underflow");
        return 0;
    }
    else
    {
        count--;
         del=q[r];
        r=(r+1)%max;
        
    return del;
    }
}
void display()
{
    int i=r;
    if(count==0)
    {
        printf("\n queue underflow");
    }
    else
    {
        printf("\nqueue elements\n ");
        for(int j=0;j<count;j++,i=(i+1)%max)
        {
            printf("%d\n",q[i]);
        }
        
    }
}
