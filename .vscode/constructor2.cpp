#include<iostream>
using namespace std;
class A 
{
    public:  
    A()
    {
        cout<<"A constructor"<<endl;
    }
};
class B:public A 
{
    public:  
    B()
    {
        cout<<"B constructor"<<endl;
    }
};
class D:public B
{
    public:  
    D()
    {
        cout<<"D constructor"<<endl;
    }
};
class C:public B 
{
    public:  
    C()
    {
        cout<<"C constructor"<<endl;
    }
};
class E:public C
{
    public:  
    E()
    {
        cout<<"E constructor"<<endl;
    }
};
class F:public E 
{
    public:  
    F()
    {
        cout<<"F constructor"<<endl;
    }
};
int main()
{
    F obj;
    D d;
}