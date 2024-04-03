#include<iostream>
using namespace std;
class A  
{
    public:
    int x;
    int y;
    void assign(int a,int b)
    {
        x=a;
        y=b;
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
    void Bassign()
    {
        p=10;
        q=20;
    }
    void Bdisplay()
    {
        cout<<p<<"\t"<<q<<endl;
    }
};
B fun(A obj3)
{
    B obj5;
    obj5.p=obj3.x;
    obj5.q=obj3.y;
    return obj5;
}
int main()
{
    A a;
    a.assign(11,22);
    A c=fun(a);
   // c.Bdisplay();
   /* B b;
    b.assign(1,2);
    A c=b;
    c.display();*/
}