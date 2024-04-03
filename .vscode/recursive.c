#include<stdio.h>
void fun(int );
int main()
{
  int n=5;
  fun(n);  
}
void fun(int n)
{
  static  int res=1;
    if(n!=0)
    {
        res=res*n;
        fun(n-1);
    }
    printf("%d\n",res);

}