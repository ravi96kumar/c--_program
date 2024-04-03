#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"class A"<<endl;
    }
};
class B: virtual public A
{
    public:

};
class c:virtual public A
{
    public:
};
class D: public B,public c
{
    public:
};
int main()
{
    D obj;
    obj. display();
    
}
