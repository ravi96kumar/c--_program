#include<iostream>
using namespace std;
class A  
{
    public:
    int x;
    int y;
    private:    
    A()
    {
        cout<<"A constructor"<<endl;
    }
    public:
    A(int a)
    {

    }
    ~A()
    {
        cout<<"A destructor"<<endl;
    }
};
class C 
{
    public:  
    C()
    {
        cout<<"c construcor"<<endl;
    }
    ~C()
    {
        cout<<"c destructor"<<endl;
    }
};
class B :public A,public C
{
    int x;
    int y;
    public:  
    B():A(10)
    {
        x=10;y=20;
        cout<<"B constructor"<<endl;
    }
    ~B()
    {
        cout<<"B destructor"<<endl;
    }
};
int main()
{
    B a;
   // A b;
   // B c;

   // cout<<"constructor created"<<endl;
}