#include<iostream>
using namespace std;

int main()
{
    int i,j,mani=0;
    int a[]={4,5,5,6,8,8,};
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
    
    if(a[i]>a[j])
    
       { mani=a[i];
        a[i]=a[j];
        a[j]=mani;
       }
    }
}
for(i=0;i<6;i++)
{
    printf(%d,a[i]);
}