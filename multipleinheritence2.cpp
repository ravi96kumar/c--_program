#include<iostream>
using namespace std;
class A 
{
    private:
    int x;
    int y;
    public:
    void display()
    {
       
        cout<<x<<"\t"<<y<<endl;
    }
     void assign(int a,int b)
    {
        x=a;
        y=b;
    }
};
class B 
{
    private:
    int p;
    int q;
    public:
    void bdisplay()
    {
       
        cout<<p<<"\t"<<q<<endl;
    }
    void bassign(int a,int b)
    {
        p=a;
        q=b;
    }
};
class C:public A,public B
{
    private:  
    int a;
    int b;
    public:
    void cassign(int p,int q)
    {
        assign(11,22);
        bassign(33,44);

        a=p;
        b=q;
    }
    void cdisplay()
    {
        display();
        bdisplay();
        cout<<a<<"\t"<<b<<endl;
    }
};
int main()
{
    A a;
    a.assign(1,2);
    a.display();
    B b;
    b.bassign(3,4);
    b.bdisplay();
    C c;
    c.cassign(55,66);
    c.cdisplay();
   
    return 0;
}