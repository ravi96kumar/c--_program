#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A();
};
A::A()
{
    a=10;
    cout<<"ctor called"<<endl;
}
int main()
{
    A obj;
}