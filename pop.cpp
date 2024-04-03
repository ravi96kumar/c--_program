#include<iostream>
using namespace std;
class A
{
    public:
    char name;
    int id;
    int roll;
    float fee;
    float sal,pay;
    A(char n)
    {
        name=n;
        cout<<"name"<<name<<endl;
    }
    A(int a)
    {
    id=a;
    cout<<"id"<<id<<endl;
    }
    A(int a,int b)
    {
        id=a;
        roll=b;
        cout<<id<<","<<roll<<endl;
    }
    A(float g)
    {
        fee=g;
        cout<<"fee"<<fee<<endl;
    }
    A(float a,float b)
    {
        sal=a;
        pay=b;
        cout<<"sal"<<sal<<","<<"pay"<<pay<<endl;
    }
    A(float a,int b)
    {
        sal=a;
        id=b;
        cout<<"sal"<<sal<<"id"<<id<<endl;
    }
    A(char x,int a)
    {
        name=x;
        id=a;
        cout<<"name"<<name<<"id"<<id<<endl;
    }
    A(int a,char x)
    {
        id=a;
        name=x;
        cout<<"id"<<id<<"name"<<name<<endl;
    }


};
int main()
{
    A obj1('a');
    A obj2(12);
    A obj3(30,20);
    A obj4(35.020f);
    A obj5(21.02f,31.45f);
    A obj6(31.02f,'s');
    A obj7('m',23);
    A obj8(33,'n');
}


            
        
    

