#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    int b;
    int c;
};
class derived:public base
{
    public:
    void changedatabase()
    {
        a=12;
        b=13;
        c=14;
        cout<<"a="<<a<<endl;
        cout<<"b"<<b<<endl;
        cout<<"c"<<c<<endl;
    }
};
int main()
{
derived base;
base.display();
}


