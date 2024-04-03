#include "namespac.h"
#include<iostream>
using namespace std;
using namespace fun1;
/*namespace one
{
    class A;
}
namespace two
{
    class A;
}
namespace three
{
    class A;
}*/
class one::A
{
    public:
    void display()
    {
        cout<<"namespace::one::display"<<endl;
    }
};
class two::A
{
    public:
    void display()
    {
        cout<<"namespace::two::display"<<endl;
    }
};
//using namespace three;
class three::A
{
    public:
    void display()
    {
        cout<<"namespace::three::display"<<endl;
    }
};
/*FUNCTION NAMESPACE*/
    void fun1::fun()
    {
    
       int z=fun1::x+fun1::y;
        cout<<"fun1 namespace  "<<z<<endl;

    }
    void fun2::fun()
    {
    
        cout<<"fun2 namespace"<<endl;

    }
 using namespace three;