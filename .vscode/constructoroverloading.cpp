#include<iostream>
using namespace std;
class A 
{
    int x;
    int y;
    public:  
    A(int a,int b)
    {
        cout<<"a constructor 2 parameter"<<endl;
       // x=a;
       // y=b;
    }
   A()
    {
        cout<<"a constructor no parameter"<<endl;
       // x=10;
        //y=20;
    }
    A(int a)
    {
        cout<<" a constructor 1 parameter"<<endl;
       // x=a;
        //y=a;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }
};
class B:public A
{
    public:
    B():A(10)
    {
        cout<<"b constructor no parameter"<<endl;
    }  
    B(int a):A(10)
    {
        cout<<" b constructor 1 with parameter"<<endl;
    }
    B(int a,int b):A(10)
    {
        cout<<"b constructor with 2 parameter"<<endl;
    }

};
int main()
{
   /* A a;
    a.display();
    A b(20,30);
    b.display();
    A c(12);
    c.display();*/
    B d;
    B e(12);
    B f(11,22);
}