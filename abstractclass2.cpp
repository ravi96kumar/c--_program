#include<iostream>
using namespace std;
class A 
{
    public: 
    int x;
    int y;
    public :
    A()
    {
      this->x=10;
        y=20;
    }
 virtual void stringcpy(char a[],char b[])=0;
    void display(int x)
    {
        cout<<this->x<<"\t"<<x<<"\t"<<y<<endl;
    }
    virtual void addition(int,int)=0;
};
class B:public A
{
    int p;
    int q;
    public:  
    void stringcpy(char a[],char b[])
    {
        cout<<"string copy"<<endl;
    }
    void addition(int a,int b)
    {
        int d=a+b;
        cout<<"addition "<<d<<endl;
    }
};
class C:public B
{
    public: 
     void display()
     {
        cout<<"c display"<<endl;
     }
};
int main()
{
    B b;
    b.addition(10,20);
    int x=100;
    b.display(x);
    C c;
    c.display();
    

}