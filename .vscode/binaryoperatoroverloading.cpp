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
    void assign(int a,int b)
    {
        x=a;
        y=b;
    }
    A operator+(A a)
    {
        A obj;
        x=x+a.x;
        y=y+a.y;
        cout<<a.x<<"\t"<<a.y<<endl;
         cout<<"sum"<<"\t"<<x<<"\t"<<y<<endl;
        return (obj);
    }
      void operator-(A a)
    {
        A obj;
        obj.x=x-x;
        obj.y=y-y;
         cout<<"difference"<<"\t"<<obj.x<<"\t"<<obj.y<<endl;
       // return (obj);
    }
      void operator*(A a)
    {
        A obj;
        obj.x=a.x*x;
        obj.y=a.y*y;
         cout<<"product"<<"\t"<<obj.x<<"\t"<<obj.y<<endl;
       // return (obj);
    }
      void operator/(A a)
    {
        A obj;
        obj.x=a.x/x;
        obj.y=a.y/y;
         cout<<"quotient"<<"\t"<<obj.x<<"\t"<<obj.y<<endl;
       // return (obj);
    }
      void operator%(A a)
    {
        A obj;
        obj.x=a.x%x;
        obj.y=a.y%y;
         cout<<"remainder"<<"\t"<<obj.x<<"\t"<<obj.y<<endl;
       // return (obj);
    }
    void operator&&(A a)
    {
      A obj;
     int m= a.x&&x;
     int n=a.y&&y;
     cout<<"logical and   "<<m<<"\t\t"<<n<<endl;

    }
    void display()
    {
      cout<<x<<"\t"<<y<<endl;
    }
};
int main()
{
    A a,b,c;
    a.assign(10,20);
    b.assign(11,22);
    c=a+a;//a.operator(b)
    a.display();
    b.display();
    c.display();
    b-a;
    a-b;
    b*a;
    b/a;
    a/b;
    b%a;
    a%b;
    a&&b;
   // cout<<"sum"<<"\t"<<sum.x<<"\t"<<sum.y<<endl;
}