#include<stdio.h>
int main()
{
  int x=10;
  void *ptr;
  ptr=&x;
  //*ptr++;
  printf("%d\n",*(int*)ptr);
  printf("%d\n",*(int*)ptr);
  char c='w';
  ptr=&c;
  printf("%c\n",*(char*)ptr);
  
 //printf("%d %d",sizeof(x),sizeof(ptr));

  
}