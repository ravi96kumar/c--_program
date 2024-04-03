#include<iostream>
using namespace std;
class A  
{public:
    int x;
    int y;
    public:  
    A() 
    {
        x=10;
        y=20;
    }
/*A(A &a)
{
      x=a.x;
      y=a.y;
}*/
   /* A(const A &a)
    {
      cout<<"copy const"<<endl;
      x=a.x;
      y=a.y;
    }*/
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }

};
int main()
{
    A a;
    a.display();
    A b;
    b=a;
    b.display();
   /* A b=a;
    b.display();
    a.x=11;
    a.y=22;
    a.display();
    b.display();
    A c(b);
    c.display();
    b.x=12;
c.display();*/
}