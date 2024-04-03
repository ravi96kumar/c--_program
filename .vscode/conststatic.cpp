#include<iostream>
using namespace std;
class A  
{
    public:
   const  int x;
    int y;
    static int m;
   static int n;
    public:   
    A():x(10),y(20)
    {
       // x=20;
        y=30;
       m=10;
       n=50;
    }
    void assign(int a,int b)const
    {
        m=a;
       n=b;
       // x=b;
        //y=a;
    }
    void display()const
    {
        cout<<x<<"\t"<<y<<endl;
        cout<<m<<"\t"<<n<<endl;
    }
};
int A::m=12;
 int A::n=33;
int main()
{
  const A a;
    a.assign(10,20);
    a.display();
};