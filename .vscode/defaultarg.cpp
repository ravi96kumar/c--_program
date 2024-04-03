#include<iostream>
using namespace std;
void check(int a,int b,int c=10)
{
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}
void check(int a,int b)
{
    cout<<a<<"\t"<<b<<endl;
}
int main()
{
   // check(10,20);
    check(10,20,30);
}