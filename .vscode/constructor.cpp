#include<iostream>
using namespace std;
class A  
{
    public: 
    static int z; 
    int x;
    int y;   
    A():x(12),y(12)
    {
      cout<<" A  constructor"<<endl;
       // x=111;
        //y=222;
        cout<<"address of static"<<&z<<endl;
    }
    A(int a)
    {
        x=a;
        y=a;
    }
    A(int a,int b)
    {
        x=a;
        y=b;
    }
};
int A::z=20;
class B:public A
{
    public:
    int p;
    int q;
    B()
    {
        cout<<"b constructor"<<endl;
    }
     B(int a)
    {
        p=a;
        q=a;
    }
    B(int a,int b)
    {
        p=a;
        q=b;
    }
};
class C:public B
{
   public:
   int m,n;
  C()
   {
    cout<<" c constructor"<<endl;
    //cout<<m<<"\t"<<n<<endl;
   }
    C(int a)
    {
        m=a;
        n=a;
         cout<<m<<"\t"<<n<<endl;
    }
    C(int a,int b):B(a)
    {
        m=a;
        n=b;
       
    }
     void display()
    {
        cout<<x<<"\t"<<y<<endl;
          cout<<p<<"\t"<<q<<endl;
            cout<<m<<"\t"<<n<<endl;
    }
};
int main()
{
   
   /* C obj(10,20);
    C d=obj;
    obj.display();*/
    A a;
    cout<<A::z<<endl;
}
