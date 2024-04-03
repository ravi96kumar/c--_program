#include<iostream>
using namespace std;
class A
{
    public:
    int number;
    void displayname()
    {
        cout<<"number is"<<number<<endl;
        
    }
A()
{
    cout<<"ctor called"<<endl;
    number=1;

}
A(int a)
{
    cout<<"parameterized ctor called"<<endl;
    number =a;
}
};
int main()
{
    A obj(A);
    A obj2(2);A obj3(3);A obj4(4);
}
