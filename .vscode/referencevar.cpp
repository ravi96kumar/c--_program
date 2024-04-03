#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &p=a;
    p=100;
    cout<<a<<"\t"<<p<<endl;
    a=123;
     cout<<a<<"\t"<<p<<endl;
      cout<<&a<<"\t"<<&p<<endl;

}