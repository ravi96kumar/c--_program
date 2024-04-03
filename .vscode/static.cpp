#include<iostream>
using namespace std;
class A
{
private:
    /* data */
public:
 int x;
int y;
static int p;
static int q;
    A()
    {
        x=10;
        y=20;
        p=30;
        q=40;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<"\t"<<p<<"\t"<<q<<endl;
    }
    
};
int A::p=55;
int A::q=66;
int main()
{
   // register int m;
    cout<<A::p<<"\t"<<A::q<<endl;
    A a;
    a.display();
    //cout<<m<<endl;
    cout<<sizeof(a);
}

