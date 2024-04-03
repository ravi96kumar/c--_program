#include<iostream>
using namespace std;
template<typename t>
class A  
{
    t x;
    t y;
    public:  
    t add(t a,t b)
    {
        t c=a+b;
        return c;
    }
    t sub(t a,t b)
    {
        t c=a-b;
        return c;
    }
};
int main()
{
    A<int> a;
    A<float>b;
    A<char>c;
   int m= a.add(10,20);
   cout<<m<<endl;
   int n= a.sub(20,10);
   cout<<n<<endl;
   float j= b.add(10.323f,12.848f);
   cout<<j<<endl;
   char k= c.add('a','b');
   cout<<k<<endl;

}