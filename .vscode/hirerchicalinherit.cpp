#include<iostream>
using namespace std;
class A 
{
    int a;
    int b;
    public:
    void display()
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
        c=11;
        d=22;
         cout<<c<<"\t"<<d<<endl;
    }
};
class C:public A
{
    int e;
    int f;
    public:
    void cdisplay()
    {
        //display();
        e=111;
        f=222;
          cout<<e<<"\t"<<f<<endl;
    }

};
class D:public B
{
    int g;
    int h;
    public:  
    void ddisplay()
    {
        g=1111;
        h=2222;
        cout<<h<<"\t"<<g<<endl;
    }
};
class E:public B
{
    int i;
    int j;
    public:  
    void edisplay()
    { 
        bdisplay();
        i=33;
        j=44;
        cout<<i<<"\t"<<j<<endl;
    }
};
class F:public C
{
    int k;
    int l;
    public:  
    void fdisplay()
    {
        cdisplay();
        k=55;
        l=66;
        cout<<k<<"\t"<<l<<endl;
    }
};
class G:public C
{
    int m;
    int n;
    public:  
    void gdisplay()
    {
        display();
        m=303;
        n=404;
        cout<<m<<"\t"<<n<<endl;
    }
};
int main()
{
    D d;
    d.ddisplay();
    E e;
    e.edisplay();
    F f;
    f.fdisplay();
    G g;
    g.gdisplay();
}