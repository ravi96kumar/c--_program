#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void fun()
    {
        cout<<"fun()"<<endl;
    }
};
class B:public A
{
public:
void displayclassA()
{
    fun();
}
};
int main()
{
    B obj;
    obj.displayclassA();
}