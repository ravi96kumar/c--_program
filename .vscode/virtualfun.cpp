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
        cout<<"a"<<endl;
    }
   virtual void display()
    {
        cout<<"A display"<<endl;
        cout<<x<<"\t"<<y<<endl;

    }
   virtual ~A()
    {
       cout<<"a dest"<<endl;
    }
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
        cout<<"b"<<endl;
    }
    private:
    void display()
    {
        cout<<"B display"<<endl;
        cout<<p<<"\t"<<q<<endl;
    }
    public:
    ~B()
    {
       cout<<"b dest"<<endl;
    }
};
class C:public B
{
    int m;
    int n;
    public:  
    C()
    {
        m=11;
        n=22;
        cout<<"c"<<endl;
    }
    private:
    void display()
    {
        cout<<"C display"<<endl;
        cout<<m<<"\t"<<n<<endl;
    }
    ~C()
    {
       cout<<"c dest"<<endl;
    }
};
int main()
{
   // A a;
    //A a1;
  //  B b;
   /* C c;
    A *ptr;
    ptr=&c;
    ptr->display();
    ptr->~A();*/
  // cout<<sizeof(A)<<endl;
 A *ptr=new C;
 ptr->display();
  //free(ptr);
 delete(ptr);
//B b;
 //A *ptr1=(A*)malloc(sizeof(B));
 //delete(ptr1);
}