#include<iostream>
using namespace std;
class parent
{
    public:
    int eye()
    {
        cout<<"parent class eye"<<endl;
    }
};
class child:public parent
{
    public:
    void face()
    {
        cout<<"childs face "<<endl;
        eye();

    }
};
int main()
{
    child object;
    object. face();
}