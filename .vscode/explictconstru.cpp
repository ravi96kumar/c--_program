#include<iostream>
using namespace std;
class A
{
    public:  
    int x;
    public: 
    A()
    {
        x=0;
        cout<<"iam in constructor"<<endl;
    }
    ~A()
    {
        cout<<"i am in destructor"<<endl;
    }
    void fun()
    {
        cout<<"i am in fun"<<endl;
        A();
        cout<<"after calling explict const"<<endl;
    }
};
int main()
{
    A a;
     a.fun();
     a.~A();
    // A::A();
}