#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"classA"<<endl;

    }
    void printdata();
};
class B:public A
{
    public:
    void display()
    {
        cout<<"classB"<<endl;
    }
    void getdata();
};

int main()
{
    A*ptr;
    B objB;
    ptr=&objB;
    ptr->display();
    
}
