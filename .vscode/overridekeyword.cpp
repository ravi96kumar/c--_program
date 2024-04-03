#include<iostream>
using namespace std;
class A  
{
    public:  
 virtual void fun() 
    {
        cout<<"A class function"<<endl;
    }
    virtual void check() final
    {
        cout<<"final keyword"<<endl;
    }
};
 class B final:public A 
{
    public:

     void fun() override 
    {
        cout<<"B class function  "<<endl;
    } 
};
int main()
{
    B b;
    A *a=&b;
    a->fun();



}