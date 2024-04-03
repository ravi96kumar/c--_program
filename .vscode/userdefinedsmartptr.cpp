#include<iostream>
using namespace std;
template<typename T,typename Q>
class smtptr
{
    public:
    T *ptr;
    Q x;
    Q y;
    public:  
    smtptr()
    {
        ptr=new T;
        x=10;
        y=20;
        
    }
    ~smtptr()
    {
        delete(ptr);
    }
    T& operator*()
    {
        return *(ptr);
    }
    T* operator->()
    {
        return ptr;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<"\t"<<endl;
    }

};
class A  
{
    int a;
    int b;
    public:
    A()
    {
        a=11;
        b=22;
    }
    void display()
    {
        cout<<a<<"\t"<<b<<endl;
    }
};
int main()
{
    smtptr<int,int>p1,p2;
    *p1=10;
    *p2=300;
    cout<<*p1<<"\t"<<*p2<<endl;
    smtptr<A,int>p3;
    p3->display();
    smtptr<smtptr<int,int>,int>p4;
    p4->display();
}