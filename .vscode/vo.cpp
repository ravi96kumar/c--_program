#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"ctor called"<<endl;
    }
    ~A()
    {
        cout<<"dtor called"<<endl;
    }
    
};
int main()
{
    A obj();
    {
        A obj2;
    }
}