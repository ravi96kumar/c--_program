#include<iostream>
using namespace std;
namespace sample
{
    int a;
    int b;
    void show();
    class A   
    {
        int x;
        int y;
        public:
        void display();
    };
}
class B:public sample::A
{
    int p;
    int q;
    public:  
    void check()
    {
        cout<<"b check"<<endl;
    }
};
using namespace sample;
void A::display()
{
    cout<<"A display"<<endl;
}
void show()
{
    cout<<"sample show"<<endl;
}
int main()
{
    A a;
    a.display();
   // sample::show();
    B b;
    b.display();
    b.check();
}