#include<iostream>
using namespace std;
struct A  
{
   // protected:
   const int x;
   static int y;
   mutable int z;
    A():x(10)
    {
       // x=10;
        y=30;
    }
    A(const A& a):x(30)
    {
        y=20;
    }
    public:
 virtual void display()
    {
       cout<<x<<"\t"<<y<<endl;
    }
};
int A::y=20;
struct B:public A
{

    int m;
    int n;
    B()
    {
        m=40;
        n=30;
    }
    private:
    void display()
    {
        cout<<m<<"\t"<<n<<endl;
    }
    friend int main();
};
int main()
{
    A b;
    A a=b;
   // a->display();
    b.display();

}
