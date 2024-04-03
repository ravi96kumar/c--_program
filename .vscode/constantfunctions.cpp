#include<iostream>
using namespace std;
class A  
{
    public:
    const int id;
    mutable int x;
    mutable int y;
    static int m;
    int o;
  mutable  int p;
   const static int n;
   const int s;
    public:   
    A():x(10),y(20),s(30),id(12)
    {
       // x=20;
       // y=30;
       m=10;

    
      // n=50;
    }
    void assign(int a,int b)const
    {
        m=a;
      //  p=a;
       // n=b;
        x=b;
        y=a;
    }
    void display()const
    {
        cout<<x<<"\t"<<y<<endl;
        cout<<m<<"\t"<<n<<endl;
    }
};
int A::m=0;
const int A::n=33;
int main()
{
    A::m=12;

   // int j;j=(10,20);
   // cout<<j<<endl;
 /* const  A a;
    a.assign(12,12);
    a.display();
    a.y=23;
    a.m=32;
   // a.n=32;
    a.display();
    A b;
    b.x=23;*/
  const  A a;

  a.display();
    for(int i=0;i<3;i++)
    {
    static A k;
    k.display();
    k.assign(11,22);
    k.display();
    }
}