#include<stdio.h>
void disp(int,int);
void show(int,int);
 void(*fundisp)(int,int);
int main()
{
    int x,y;
    x=10;
    y=20;
    //disp(x,y);
   void(*shows)(int,int);
   shows=show;
    (*shows)(x,y);
    return 0;

}
void disp(int a,int b)
{
    int s=a+b;
    printf("%d\n",s);
}
void show(int x,int y)
{
    fundisp=disp;
    (*fundisp)(x,y);
}