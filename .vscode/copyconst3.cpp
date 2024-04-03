#include<iostream>
using namespace std;
class A  
{
    public:
    int x;
    int y;
    public:  
    A() 
    {
        x=10;
        y=20;
    }
     A(const A &a)
    {
      cout<<"copy const"<<endl;
      x=a.x;
      y=a.y;
    }
A(A &a)
{
      x=a.x;
      y=a.y;
}
   
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }

};
/*void fun(const A obj)
{
    cout<<obj.x<<"\t"<<obj.y<<endl;
}*/
A fun2(A a)
{
    A d;
    d.x=11;
    d.y=22;
    return d;
}
int main()
{
    A a;
    A b(a);
}