#include<iostream>
using namespace std;
class mani
{
    public:
    mani()
    {
        cout<<"ctor called"<<endl;
    }
    ~mani()
    {
        cout<<"dtor called"<<endl;
    }
    
};
int main()
{
    mani obj();
    {
        mani obj2;
    }
}