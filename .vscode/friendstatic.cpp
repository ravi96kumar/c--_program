#include<iostream>
using namespace std;
class B;
class A  
{
    int x;
    static int a;
    static int b;
     void assign()
    {
        x=20;
    }
    static void display()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    friend class B;
};
int A::a=10;
int A::b=20;
class B
{
    static int m;
    static int n;
    static void check()
    {
        A::a=20;
        A::b=30;
        A::display();
        
    }
    friend int main();
};
int B::m=11;
int B::n=22;
int main()
{
    B::m=33;
    B::check();
}