#include<iostream>
using namespace std;
class A
{
    int x;
    float y;
    public:
    int add(int a,int b)
    {
        x=10;
        y=20.2;
        int x=a+b;
        return x;

    }
     int add(int a,int b,int c)
    {
        int x=a+b+c;
        return x;

    }
     int add(int a,int b,int c,int d)
    {
        int x=a+c+b+d;
        return x;

    }
};
int l=100;
int main()
{
    A m;
    int x=m.add(10,20);
    int y=m.add(10,20,30);
    int z=m.add(10,20,30,40);
    int w=m.add(12,122);
    cout<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<endl;
}