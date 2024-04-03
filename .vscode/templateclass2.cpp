#include<iostream>
using namespace std;
void display();
template<class t,typename p>
class A  
{
    t x;
    p y;
    public: 
    A()
    {
        x=20;y=22;
    }
    template<typename m> 
    m add(float a,p b)
    {
        m c=a+b;
        return c;
    }
    float sub(p a,t b)
    {
        p c=a-b;
        return c;
    }
    friend void display();
};
int main()
{
   /* A<int,float> a;
    A<float,int>b;
    A<char,int>c;
   int m= a.add<int>(10.256f,20);
   cout<<m<<endl;
   float n= b.sub(20,10);
   cout<<n<<endl;
   float j= b.add<float>(10.23f,12);
   cout<<j<<endl;
   char k= c.add<int>(65,32);
   cout<<k<<endl;
   int x=1232;
   char y=x;
   cout<<y<<endl;*/
    display();
}
template<class t,typename p>
void display()
{
    t c;
    p q;
    A<int,int> m;
    cout<<m.x<<"\t"<<m.y<<endl;
}