#include<iostream>
using namespace std;
template<typename p>
void check();
template<typename x>
class B;
template<typename t>
class A 
{
   t a;
   t b;
   public:  
   A()
   {
    a=10;
    b=20;

   }
   void display()
   {
    cout<<a<<"\t"<<b<<endl;
   }
friend void check<int>();
friend class B<int>;
};
template<typename x>  
class B  
{
    x e;
    x f;
    public:  
    B()
    {
        e=33.034;
        f=44.003;
    }
    void display()
    {
        A<float>s;
        s.display();
        cout<<e<<"\t"<<f<<endl;
    }
friend void check();
friend void A<int>::display();
friend class A<int>;
};
template<typename p>  
void check()
{
    p m;
    p n;
    m=1;
    n=2;
    A<int>obj;
    obj.display();
    obj.a=11;
    obj.b=22;
    obj.display();
    B<float>z;
    z.display();
    cout<<m<<"\t"<<n<<endl;

}
int main()
{
    A<int>obj;
    check<int>();
    B<float>obj2;
}