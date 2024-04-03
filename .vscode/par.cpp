#include<iostream>
using namespace std;
class A
{
    public:
    int number;
    void displaynumber()
    {
        cout<<"number is"<<number<<endl;
    }

A()
{
    cout<<"ctor called"<<endl;
    number=1;
}
};
int main()
{
    A obj();
    A obj1;
    A obj2;
}