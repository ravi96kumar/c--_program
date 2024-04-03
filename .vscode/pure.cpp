/*#include<iostream>
using namespace std;
class A
{
    public:
    virtual void display()=0;
};
class B:public A
{
    public:
    void display()
    {
        cout<<"class overrided B"<<endl;
    }
};
int main()
{
    A*ptr;
    B obj;
    ptr=&obj;
    ptr->display();
}*/


#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()=0;
};
class derived:public base
{
    public:
    int x=13,y=14,z;
    int z=x-y;
    void display()
    {
        cout<<"sub"<<sub<<endl;
    }
};
int main()
{
    base*ptr;
    derived obj;
    ptr=&obj;  
    ptr->display();
    
}