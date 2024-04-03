#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
    static int num1;
    static int num2;
    public:
 inline static void print()
{
    int k=num1+num2;
    cout<<num1+num2<<endl;
    
}
};
int A::num1=10;
int A::num2=20;
int main()
{
 A::print();
 //A a;
    return 0;
    
}