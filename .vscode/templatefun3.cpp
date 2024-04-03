#include<iostream>
using namespace std;
class A  
{
    public: 
    static int x;
    static int y;
    template<typename p> 
   static void add(p a,p b)
    {
        p c=a+b+x+y;
        cout<<"normal  "<<c<<endl;
    }
    template<typename t>
    t add(t a,t b,t d)
    {
        t c=a+b+d;
        cout<<"template  "<<c<<endl;
        return c;
    }
};
int A::x=10;
int A::y=20;
int main()
{
    A a;
    a.add(10.23f,20.23f);
    a.add<int>(10,20,30);
}