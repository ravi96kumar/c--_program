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
}

A(int a)
{
    cout<<"parameterized ctor called"<<endl;
    number =a;
} 
};
int main()

{
    A obj(A);
    A obj2(A),obj3(A);
    
}