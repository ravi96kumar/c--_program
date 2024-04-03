#include<iostream>
using namespace std;
class A  
{
    public:
    A()
    {
       cout<<"a const"<<endl;
    }
    ~A()
    {
        cout<<"A dest"<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        static A obj;
        cout<<"Bconst"<<endl;
    }
     ~B()
    {
        cout<<"B dest"<<endl;
    }
};
class C:public B
{
    public:
    C()
    {
        static B obj;
        cout<<"C const"<<endl;
    }
     ~C()
    {
        cout<<"C dest"<<endl;
    }
};
int main()
{
    A obj;
    {
        B obj;
       // cout<<"AAA"<<endl;
        {
            C obj;
        }
    }
}