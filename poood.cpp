#include<iostream>
using namespace std;
int main()
{
int i,j,mani,count;
int a[]={1,2,2,5,8,};
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if (a[i]<a[j])
        {
            mani=a[i];
            a[i]=a[j];
            a[j]=mani;
        }
    }
}
for(i=0;i<5;i++)
{
    
    printf("%d",a[i]);
}


}