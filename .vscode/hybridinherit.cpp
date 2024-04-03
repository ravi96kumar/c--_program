#include<iostream>
using namespace std;
class B 
{
    private:  
    int p;
    int q;
    public:
    void Bdisplay()
    {
        cout<<p<<" "<<q<<endl;
    }
    void Bassign(int a,int b)
    {
        p=a;
        q=b;
        cout<<p<<" "<<q<<endl;
    }
    friend class A;
};
class A 
{
    private: 
    int x;
    int y;
    public:
    void Adisplay()
    {
        cout<<x<<" "<<y<<endl;
    }
    void Aassign(int a,int b)
    {
        B n;
        n.p=10;
         n.q=20;
         n.Bassign(10,20);
        x=a;
        y=b;
        cout<<x<<" "<<y<<" "<<n.p<<" "<<n.q<<endl;
    }
};

class C:public A,public B
{
    int k;
    int l; 
    public:
    void assign(int a,int b)
    {
        Aassign(20,30);
        Adisplay();
        k=a;
        l=b;    
    }
    void display()
    {
        //Adisplay();
        //Bdisplay();
        cout<<k<<"\t"<<l<<endl;
    }
};
class D:public C
{
    public:
    int a;
    int b;
    public: 
    void show()
    {
        Aassign(12,56);
    
        assign(1,2);
        a=20;
        b=40;
        display();
        cout<<a<<"\t"<<b<<endl;
    }
};
class E:public D
{
    int a;
    int b;
    public: 
    void show()
    {
        Aassign(12,56);
    
        assign(1,2);
        a=20;
        b=40;
        display();
        cout<<a<<"\t"<<b<<endl;
    }
};
int main()
{
   E d;
   d.show();    
    return 0;


}