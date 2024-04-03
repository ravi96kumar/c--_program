#include<iostream>
using namespace std;
class A 
{
    int x;
    int y;
    public:
    void assign(int a,int b)
    {
        x=a;
        y=b;
    }
    void display();
    friend void show();
    friend void check();
};
void show()
{
    class A b;
    b.x=12;
    b.y=13;
    b.display();
    
}
void A::display()
{
    cout<<x<<"\t"<<y<<endl;
}
void check()
{
    class A c;
    c.x=22;
    c.y=33;
    c.display();
}
int main()
{
    class A a;
    show();
    check();
    a.assign(10,20);
    a.display();

}
