#include<iostream>
using namespace std;
class B
{
    public:
    B(int a)
    {
        cout<<"ctor called value"<<a<<endl;
    }
};
int main()
{
    

     B obj(1);

    B obj2(2);
    B obj3(3);
}
