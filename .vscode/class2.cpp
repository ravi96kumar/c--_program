#include<iostream>
using namespace std;
class B;
class A 
{
    public:  
    int a;
    int b;
    A()
    {
        a=10;
        b=20;
    }
  B change(B);
};
class B
{
    public:
    int p;
    int q;
    B()
    {
        p=50;
        q=60;
    }
    void display()
    {
        cout<<p<<"\t"<<q<<endl;
    }
};

int main()
{
    B b;
    b.display();
    A a;
    B c=a.change(b);
    c.display();
    
}
  B A::change(B obj)
    {
        B b;
        b.p=100;
        b.q=200;
        b.display();
        return b;
    }