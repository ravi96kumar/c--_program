#include<stdio.h>
#include<string.h>

struct stu
{
	char name[10];
    int roll;
    float marks;
};

int main()
{

	int x,y,z;
	struct stu e;
	struct stu *ptr1=&e;
	struct stu E1={"usha",101,20.00f};
	struct stu *ptr =0;
    printf("size of structure =%d",ptr);
	struct stu *PTR=&E1;
    ptr++;
	/*x=ptr1;
	ptr1++;
	y=ptr1;
	z=y-x;
	printf("%d         %d\n",x,y);
	printf(" size of structure %d\n",z);*/

	
  printf("Size of the structure student:  %d\n",ptr);
    strcpy(PTR->name,"viji");
	PTR->roll=101;
	PTR->marks=10;
	printf("%s\t%d\t%f",PTR->name,PTR->roll,PTR->marks);
}