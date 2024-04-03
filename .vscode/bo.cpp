#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"ctor called"<<endl;
    }
};
int main()
{
    A obj;
}