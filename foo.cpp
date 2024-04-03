#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
    cout<<"base ctor"<<endl;
    }
};
class derived1:public base
{
    public:
    derived1()
    {
        cout<<"derived1 ctor"<<endl;
    }
}  ;
class derived2: public base
{
public:
derived2()
{
    cout<<"derived2 ctor"<<endl;

}
};
int main()
{
    derived1 object;
    derived2 object2;
}