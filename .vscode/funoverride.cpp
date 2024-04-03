#include<iostream>
using namespace std;
class A  
{
    int x;
    int y;
    public:  
    void assign(int a,int b)
    {
        x=a;
        y=b;
    }
   /* void display()
    {
        cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
    }*/
};
class B:public A
{
    int p;
    int q;
    public:  
    void assign(int a,int b)
    {
        p=a;
        q=b;
    }
    void display()
    {
        cout<<"p="<<p<<"\t"<<"q="<<q<<endl;
    }
    
};
class C:public B
{
    public:
    int s;
    int t;
    public:  
    void assign(int a,int b)
    {
        s=a;
        t=b;
    }
    int display()
    {
        cout<<"s="<<s<<"\t"<<"t="<<t<<endl;
        return 0;
    }

};
int main()
{
    B b;
    b.assign(10,20);
    //b.display();
    C c;
    cout<<c.s<<endl;
    c.assign(11,22);
    c.display();
    b.A::assign(12,22);
   // b.A::display();
}