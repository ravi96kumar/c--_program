#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"base1 ctor"<<endl;
    }
    ~base1()
    {
        cout<<"base1 dtor"<<endl;
    }
    
};
class base2
{
    public:
    base2()
    {
        cout<<"base2 ctor"<<endl;
    }
    ~base2()
    {
        cout<<"base2 dtor"<<endl;
    }
    
};
class derived:public base1,base2
{
    public:
    derived()
    {
        cout<<"derived ctor"<<endl;
    }
    ~derived()
    {
        cout<<"derived dtot"<<endl;
    }
    
};
int main()
{
    derived object;
}