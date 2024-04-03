#include<iostream>
using namespace std;
void check();
class A
{
    // public:
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
   // public:  
    int p;
    int q;
    public:
    void show()
    {
       // x=33;
       // y=44;
        p=100;
        q=200;
        cout<<"\t"<<q<<"\t"<<p<<"\t"<<q<<endl;
    }
    friend void check();
};
void check()
{

}
int main()
{
    A a;
   // a.assign();
   // a.display();
    B b;
    cout<<sizeof(b);
   /* b.assign();
    b.display();
    b.show();
    check()*/;
    return 0;
}
