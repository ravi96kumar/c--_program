#include<iostream>
using namespace std;
//#include "friend3.h"
class B;
class A 
{
    int x;
    int y;
    public:
    void display();
    friend class B;
};
class B 
{
    int p;
    int q;
    public: 
    void show();
    friend void A::display();
};

void A::display()
{
    B b;
    b.p=22;
    b.q=33;
    cout<<b.p<<" "<<b.q<<endl;

}

void B::show()
{
    A a;
    a.x=10;
    a.y=20;
    cout<<a.x<<" "<<a.y<<endl;

}
int main()
{
    A a1;
    a1.display();
    B b1;
    b1.show();
    return 0;
}