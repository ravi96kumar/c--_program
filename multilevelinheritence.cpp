#include<iostream>
using namespace std;
class A
{
     public:
    int x;
    int y;
    public:
    void assign()
    {
        cout<<x<<"\t"<<y<<endl;
        x=10;
        y=20;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }
};
class B:public A
{
    public:  
    int p;
    int q;
    void show()
    {
        x=33;
        y=44;
        p=100;
        q=200;
        cout<<x<<"\t"<<q<<"\t"<<p<<"\t"<<q<<endl;
    }
};
class C:public B
{
    public:  
    int m;
    int n;
    void check()
    {
        cout<<x<<"\t"<<y<<"\t"<<p<<"\t"<<q<<"\t"<<m<<"\t"<<n<<endl;
        cout<<"size of A="<<sizeof(A)<<endl;
        cout<<"size of B="<<sizeof(B)<<endl;
        cout<<"size of c="<<sizeof(C);
    }

};
int main()
{
    A a;
    a.assign();
    a.display();
    B b;
    b.y=22;
    b.x=33;
    b.assign();
    b.display();
    b.show();
    C c;
    c.x=1;
    c.y=2;
    c.p=3;
    c.q=4;
    c.m=5;
    c.n=6;
    c.check();
    return 0;
}
