#include<iostream>
using namespace std;
class A 
{
    public:
void check(int a,int b,int c=12)
{
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}
void check(int a,int b)
{
    cout<<a<<"\t"<<b<<endl;
}
};
int main()
{
    A a;
  // a.check(10,20);
    a.check(10,20,30);
}