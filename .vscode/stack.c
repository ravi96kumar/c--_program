#include<stdio.h>
#include<stdlib.h>
#define max 5
int s[max];
int top=-1;
void push(int);
int pop();
void display();
enum stack{Push=1,Pop,Display,Exit};
int main()
{
    int ch,item,del;
    while(1)
    {
        printf("\n 1-PUSH \t 2-POP \t 3-DISPLAY \t 4-EXIT");
    printf("\nenter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case Push:
        {
            printf("\nenter the element\n");
            scanf("%d",&item);
            push(item);
        }
        break;
        case Pop:
        {
            del=pop();
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
void push(int item)
{
    if(top==max-1)
    {
        printf("\n stack overflow");
    }
    else
    {
        top=top+1;
        s[top]=item;
    }
}
int pop()
{
    int del;
    if(top==-1)
    {
        printf("\n stack underflow");
    }
    else
    {
         del=s[top];
        top=top-1;
    }
    return del;
}
void display()
{
    if(top==-1)
    {
        printf("\n stack underflow");
    }
    else
    {
        printf("\nstack elements\n ");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",s[i]);
        }
        
    }
}
