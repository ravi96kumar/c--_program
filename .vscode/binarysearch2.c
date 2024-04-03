#include<stdio.h>
int binary_search(int a[],int n,int data)
{
	int l = 0 ;
	int r = n-1;
	int mid;
	while(l<=r)
	{
		mid=l+r/2;
		if(data == a[mid])
		{
			return mid ;

		}
		else if(data<a[mid])
		{
			r=mid-1;
		}
		else
		{
			l= mid+1;
		}
	}
	return -1;
}
int main()
{

		int data,receive,choice;
		int a[]={1,2,3,4,5,6,7,8,9};
		int n=sizeof(a)/sizeof(a[0]);
		printf("\n");
	    printf("enter a search number:");
		scanf("%d",&data);
		receive=binary_search(a,n,data);
		printf("data:\t%d position of data:\t%d\n",data,receive);
}