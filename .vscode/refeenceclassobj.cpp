#include<iostream>
using namespace std;
class A 
{
    public:  
    int x;
    int y;
    A ()
    {
        x=10;
        y=20;
    }
    void assign(int a,int b)
    {
        x=a;y=b;
    }
    void display()
    {
        int x=13;
        int y=14;
      cout<<x<<"\t"<<y<<"\t"<<this->x<<"\t"<<this->y<<"\t"<<this<<endl;
      assign(12,24);
    }


};
void fun(A &z)
{
    z.x=444;
    z.y=333;
}
int main()
{
    A a;
   a.display();
    A b=a;
    a.assign(33,44);
    fun(a);
    //b.display();
    a.assign(55,66);
    a.display();
    A c;
    c.display();
    A d;
    d.display();
   /* bool p=0;
    p=true;
    if(p)
    {
        cout<<"bool value is true  "<<p<<endl;
    }
    else
    {
        cout<<"bool value is false  "<<p<<endl;
    }*/
}