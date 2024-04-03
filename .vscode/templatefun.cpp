#include<iostream>
using namespace std;
class A 
{
    public:
template<typename t>
t add(t a,t b)
{
    t c=a+b;
    return c;
}
};
int main()
{
    A f;
    int a=f.add<int>(10,20);
    float b=f.add<float>(10.25f,20.5f);
    char c=f.add<char>('a','b');
    double d=f.add<double>(123.2323,1234.2234);
}