#include<stdio.h>
#include<stdlib.h>
#define max 5
int q[max];
int f=-1;
int r=0;
void insert(int);
void insert_r(int);
int delete();
void display();
int delete_f();
enum stack{inser=1,delt,Display,INSERT_R,DELETE_F,Exit};
int main()
{
    int ch,item,del;
    while(1)
    {
        printf("\n 1-insert \t 2-delete \t 3-DISPLAY \t 4-INSERT_R\t 5-DELETE-F \t 6-EXIT");
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
            del=delete();
           printf("\n deleted item is %d",del);
        }
        break;
        case Display: 
        {
            display();
        }
        break;
        case INSERT_R:  
        {
           printf("\nenter the element\n");
            scanf("%d",&item);
            insert_r(item); 
        }
        break;
        case DELETE_F:
        {
            del=delete_f();
            printf("\n deleted item is %d",del);
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
    if(f==max-1)
    {
        printf("\n queue overflow");
    }
    else
    {
        f++;
        q[f]=item;
    }
}
int delete()
{
    int del;
   /* if(r>f)
    {
        f=-1;
        r=0;
    }
    else*/ if ((f==-1)&&(r==0))
    {
        printf("\n queue underflow");
    }
    else
    {
         del=q[r];
        r++;
        if(r>f)
        {
            f=-1;
            r=0;
        }
    }
    return del;
}
void display()
{
    if((f==-1)&&(r==0))
    {
        printf("\n queue underflow");
    }
    else
    {
        printf("\nqueue elements\n ");
        for(int i=0;i<=f;i++)
        {
            printf("%d\n",q[i]);
        }
        
    }
}
void insert_r(int item)
{
    if(r!=0)
    {
        r--;
        q[r]=item;
    }
    else{
        printf("\n space not available");
    }

}
int delete_f()
{
    int del;
    if(f!=-1)
    {
        del=q[f];
        f--;
        return del;
    }
    else
    {
        printf("queue is empty\n");
        return 0;
    }
}