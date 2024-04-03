#include <stdio.h>
# define MAX1 10
#define my_sizeof(type) (int)(&type+1)-(int)(&type)
#define greater(x,y) ((x<y)?x:y)
#define MAX(x,y,z) ((x<y)?((x<z)?x:z):(y<z)?y:z)
int main() 
{
   int x;
   char *y;
   double z = 254748.23;
   printf("integer address &x+1=%p\t&x=%p\n",&x+1,&x);

   printf("size of x: %d\n", my_sizeof(x));
   printf("size of y: %d\n", my_sizeof(y));
   printf("size of z: %d\n", my_sizeof(z));
  int a=10;
  int b=20;
  int c=30;
  int 	max=greater(a,b);
	printf("Maximum number is: %d\n",max);
    int max3=MAX(a,b,c);
    printf("maximum of 3 numbers=%d",max3);
    return 0;
}