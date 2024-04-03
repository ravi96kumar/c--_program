#include<iostream>
using namespace std;
class B
{
    public:
    int id;
    char sec;
    float sal;
    char name;
    B(int a)
    {
       id=a;
       cout<<"id"<<id<<endl;
    }
    B(char b)
    {
        sec=b;
        cout<<"sec"<<sec<<endl;
    }
    B(float c)
    {
        sal=c;
        cout<<"sal"<<sal<<endl;
    }
    B(int a,char b)
    {
        id=a;
        sec=b;
        cout<<"id"<< id<<","<<"sec"<<sec<<endl;
    }
    B(float c,char b)
    {
        sal=c;
        sec=b;
        cout<<"sal"<<sal<<"sec"<<sec<<endl;
    }
    
};
int main()
{
    B obj1(32);
    B obj2('k');
    B obj3(32.2f);
    B obj4(42,'m');
    B obj5( 3200,'f');
    
}