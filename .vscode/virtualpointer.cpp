#include<iostream>
using namespace std;
#include<malloc.h>
class A  
{
    int x;
    int *y;
    public:
    A()
    {
        x=10;
        y=new int;
        *y=100;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<"\t"<<*y<<endl;
    }
    ~A()
    {
        cout<<"A destructor"<<endl;
        delete(y);
    
    }
};
int main()
{
    A *a=new A;
    int *p=new int;
    a->display();
    delete(a);
    cout<<"check"<<endl;
    delete(p);
}