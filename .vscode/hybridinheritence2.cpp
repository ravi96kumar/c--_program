#include<iostream>
using namespace std;
class A 
{
    int a;
    int b;
    public:  
    void adisplay()
    {
        a=10;
        b=20;
        cout<<a<<"\t"<<b<<endl;

    }
};
class B:public A
{
    int c;
    int d;
    public:  
    void bdisplay()
    {
        //adisplay();
        c=30;
        d=40;
        cout<<c<<"\t"<<d<<endl;
    }
};
class C 
{
    int e;
    int f;
    public:  
    void cdisplay()
    {
        e=50;
        f=60;
         cout<<e<<"\t"<<f<<endl;
    }
};
class D:public C,public B
{
    int g;
    int h;
    protected:
    void ddisplay()
    {
        g=11;
        h=22;
       // adisplay();
        //bdisplay();
       // cdisplay();
         cout<<g<<"\t"<<h<<endl;
    }
};
class E:public D
{
    int i;
    int j;
    public:  
    void edisplay()
    {
        i=33;
        j=44;
        adisplay();
        bdisplay();
        cdisplay();
        ddisplay();
         cout<<i<<"\t"<<j<<endl;
    }

};
int main()
{
    E e;
    e.edisplay();
    D d;
  //  d.ddisplay();
}