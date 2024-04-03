#include<iostream>
using namespace std;
class A  
{
    public:
    int x;
    int y;
    void assign()
    {
        x=10;
        y=20;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }
    void check(A);
};
A fun(A a)
{
    a.x=100;
    a.y=200;
    a.display();
    return a;
}
A fun2()
{
    A b;
    b.x=123;
    b.y=180;
    b.display();
    return b;
}
void A::check(A a)
{
    x=11;
    y=22;
    display();
}
int main()
{
    A a;
    a.check(a);
    a.assign();
  A c=  fun(a);
    a.display();
    A b;
    b=fun2();
    b.display();
    c.display();
}