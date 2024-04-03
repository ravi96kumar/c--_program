#include<iostream>
using namespace std;
class A  
{public:
    A()
    {
        cout<<"A"<<endl;

    }
    ~A()
    {
        cout<<"A dest"<<endl;
    }
};
int main()
{
    A a;
  A();
  cout<<"check"<<endl;

}