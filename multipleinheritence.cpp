#include<iostream>
using namespace std;
class A 
{
    public:
    int x;
    int y;
    void display()
    {
       // x=12;
        //y=13;
        cout<<x<<"\t"<<y<<endl;
    }
};
class B 
{
    public:
    int p;
    int q;
    void bdisplay()
    {
       // p=22;
        //q=33;
        cout<<p<<"\t"<<q<<endl;
    }
};
class C:public A,public B
{
    public:  
    int a;
    int b;
    void cdisplay()
    {
        cout<<x<<"\t"<<y<<"\t"<<p<<"\t"<<q;
        cout<<"\t"<<a<<"\t"<<b<<endl;
    }
};
int main()
{
   
    C c;
    c.x=11;
    c.y=22;
    c.p=33;
    c.q=44;
    c.a=55;
    c.b=66;
    c.cdisplay();
    c.display();
    c.bdisplay();
    return 0;
}

