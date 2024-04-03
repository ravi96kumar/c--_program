//#include<iostream>
#pragma pack(push,1)
#include "name.h"
int main()
{ 
    one::A a;
    a.display();
    two::A a2;
    a2.display();
    A a3;
    a3.display();
    using namespace fun2;
    fun1::fun();
    fun2::fun();
    int z=fun1::x+fun1::y;
    int x=var1::x+var2::x;
    cout<<"addition of"<<var1::x<<"+"<<var2::x<<"="<<x<<endl;
    cout<<sizeof(a3)<<endl;
}