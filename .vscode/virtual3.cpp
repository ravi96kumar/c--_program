#include<iostream>
using namespace std;
#include<malloc.h>
class A  
{
    private:
    int x;
    int y;
    public:
    A ()
    {
        x=20;
        y=30;
       // cout<<"a"<<endl;
    }
   // private:
  virtual void display()
    {
        cout<<"A display"<<endl;
        cout<<x<<"\t"<<y<<endl;

    }
  /* virtual ~A()
    {
       cout<<"a dest"<<endl;
    }*/
};
class B:public A 
{
    public:  
    int p;
    int q;
    //int r;
    //char c;
    B()
    {
        p=11;
        q=22;
       // cout<<"b"<<endl;
    }
    private:
    void display()
    {
        cout<<"B display"<<endl;
        cout<<p<<"\t"<<q<<endl;
    }
    
    public:
   /* ~B()
    {
       cout<<"b dest"<<endl;
    }*/
    private:
    friend void A::display();
};
int main()
{
    
   B b;
   A *a=&b;
    a->display();
   
    
}
