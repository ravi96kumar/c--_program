#include<iostream>
using namespace std;
class A  
{
    public:
    int x;
    int y;
    A()
    {
        x=10;
        y=20;
    }
   virtual void add()=0;
   virtual void fun()
   {
    cout<<"class A function"<<endl;
   }
};
class B  
{
    public:
    int p;
    int q;
    B()
    {
        p=11;
        q=22;
    }
   virtual void add()=0;
  virtual  void fun()
   {
    cout<<"class B function"<<endl;
   }
};
class C :public A,public B 
{
    public:
    int m;
    int n;
    C()
    {
        m=33;
        n=44;
    }
    void add()
    {
       cout<<"multiple in heritence"<<endl;
    }
    void fun()
    {
        cout<<"virtual function"<<endl;
    }
};
int main()
{
    A *a=new C;
    B * b=new C;
    a->add();
    a->fun();
    b->fun();
    C c;
    c.fun();
}
