#include<iostream>
using namespace std;
class A  
{
    public:
    int x;
    int y;
    static int p;
    static int q;
   const static void show()
    {
        cout<<"A ststic function\n";
        p=30;
        q=40;
        cout<<p<<"\t"<<q<<endl;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<this->p<<" "<<q<<endl;
    }
};
int A::p=10;
int A::q=20;
int main()
{
    A::show();
    A a;
    a.display();
    a.show();
    A b;
    b.x=111;
    b.y=222;
    b.display();
    A::show();
    a.display();
}