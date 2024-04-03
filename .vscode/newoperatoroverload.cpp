#include<iostream>
#include<stdlib.h>
class A;
void fun(A *);
using namespace std;
class A  
{
    int x;
    int y;
    public: 
A()
{
    x=10;
    y=20;
    cout<<"A constructor"<<endl;
}
 void display()
{
    cout<<x<<"\t"<<y<<endl;
}
//static inline void *A::operator new(size_t size)
void* operator new(size_t size)
{
 cout<<"hello"<<endl;
void* p= malloc(sizeof(A));
//display();
 void *q=::operator new(size);
//display();
 return p;
}
 void operator delete(void * p)
    {
        cout<< "Overloading delete operator " << endl;
        free(p);
    }
};

int main()
{
    A* pobj=new A;
    int * p=new int;
    delete(pobj);
}