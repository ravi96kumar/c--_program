#include<iostream>
using namespace std;
class A  
{
    public:
    int x;
    int y;
    public:  
    A()
    {
        x=10;
        y=20;
        int x=11;
        int y=22;
        cout<<x<<"\t"<<y<<"\t"<<x<<"\t"<<y<<endl;
    }
    A(A &a)
    {
        x=a.x;
        y=a.y;
        cout<<x<<"\t"<<y<<endl;
    }

    void display(int x,int y)
    {   
        

        cout<<this->x<<"\t"<<this->y<<endl;
    }

};
int x=20;
int main()
{
    int x=10;
    A a;
    a.x=100;
    a.y=200;
    A b(a);
    b.display(40,50);
    cout<<::x<<"\t"<<x<<"\t"<<endl;
}