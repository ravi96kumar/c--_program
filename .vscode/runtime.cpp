#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"class A ctor"<<endl;
    }
    void display()
    {
        cout<<"this is class A"<<endl;
    }       
};
class B:public A
{
    public:
    B()
    {
        cout<<"class B ctor"<<endl;
    }
    void display()
    {
        cout<<"this is class B"<<endl;
    }
};
int main()
{
A*ptr;//it wont call anything
A object;//class A ctor
B*ptrb;
B object1;
ptrb=&object1;
ptrb->display();

ptr=& object;//assing the memory for pointer
object.display();//trough object
ptr->display();//through pointers
}