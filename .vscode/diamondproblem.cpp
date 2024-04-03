#include<iostream>
using namespace std;
class A  
{
    public:  
    int x;int y;
    A()
    {
        x=11;
        y=22;
        cout<<"a constru"<<endl;
    }
    virtual void display()
    {
       cout<<x<<"\t"<<y<<endl;
    }
virtual ~A()
    {
         cout<<"A dest "<<endl;
    }
};
class B:virtual public A  
{
    public:  
    int a;
    int b;
    B()
    {
        a=10;
        b=22;
         cout<<"b constru"<<endl;
    }
    void display()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    ~B()
    {
         cout<<"B dest"<<endl;
    }
};
class C:virtual public A  
{
    public:  
    int m;
    int n;
    C()
    {
        m=30;
        n=40;
         cout<<"c constru"<<endl;
    }
    void display()
    {
        cout<<m<<"\t"<<n<<endl;
    }
    ~C()
    {
         cout<<"C dest"<<endl;
    }
};
class D:public B,public C 
{
    public:  
    int i;
    int j;
    D()
    {
        i=44;
        j=55;
         cout<<"d constru"<<endl;
    }
    void display()
    {
        cout<<i<<"\t"<<j<<endl;
    }
    ~D()
    {
         cout<<"D dest"<<endl;
    }
};
int main()
{
   // D d;
   A *a=new D;
   a->display();
   delete(a);
    //d.adisplay();
}