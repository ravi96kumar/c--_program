#include<iostream>
#include<string.h>
using namespace std;
class A  
{
    public: 
    int a;
   int c;
   int q;
   int z;
   int *p;
    public:  
    A()
    {
        a=10;
        c=20;
     //   p=&a;

    }
    void change()
    {
        a=100;
        c=200;
      //  p=&c;
    }
  virtual  void display()
    {
        cout<<"a display"<<endl;
        //cout<<a<<"\t"<<c<<"\t"<<*p<<endl;
        //cout<<&a<<"\t"<<&c<<"\t"<<p<<endl;
    }
};
class B:public A 
{
    public:
    int x;
    int y;
    char name;
  void display()
 {cout<<"b display"<<endl;
   // cout<<name<<endl;
 }
};
class C:public B
{
    void display()
    {
        cout<<"C display"<<endl;
    }
};
//int A::c;
int main()
{
    A obj1;
    B obj2;
    C c;
    B *m=&c;
    m->display();
   /* A *pobj1;
    pobj1=&c;
    pobj1->a=12;
    pobj1->change();
    pobj1->display();
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    cout<<sizeof(c)<<endl;*/
   /* B a;
    B *n;
    n=&a;
    A *b;
    b=&a;
    b->c=123;
    strcpy(n->name,"ravi");
    a.dispaly();
    a.change();
    a.dispaly();
    b->dispaly();
    b->change();
    b->dispaly();
    n->display();
    cout<<"size ofpointer "<<sizeof(b)<<endl;
    cout<<"size of A "<<sizeof(A)<<endl;
   // B m;
   // B*/

}