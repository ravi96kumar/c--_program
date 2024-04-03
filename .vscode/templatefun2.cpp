#include<iostream>
using namespace std;
class A 
{
    public:
    template<typename t,typename p>
    p add(t a,p b,p d)
    {
        p c=a+b+d;
        return c;
    }

};
int main()
{
    A a;
    float c=a.add<int,float>(10,20.56f,12.234);
    cout<<c<<endl;
    float d=a.add<float,int>(10.256f,12,12.55);
    cout<<d<<endl;
}