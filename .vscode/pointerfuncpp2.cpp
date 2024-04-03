#include<iostream>
using namespace std;

class A  
{
    public:  
    int x;
    int y;
    A()
    {
        x=10;
        y=20;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }
};

//void fun(A *);
/*A *fun1(A* pobj)
{
   pobj->x=100;
   pobj->y=200;
   return pobj;
}*/
//A a1;
A* fun2()
{
   static A a1;
    a1.x=100;
    a1.y=200;
    return (&a1);
}
int main()
{
    A a;
   // a.display();
    a.x=101;
    a.y=202;
    A *m=fun2();
    m->display();
   // fun(&a);
  // A *obj2=fun1(&a);
    //obj2->display();
   // a.display();
}
/*void fun(A *pobj)
{
    pobj->x=100;
    pobj->y=200;
}*/