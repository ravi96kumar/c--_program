#include<iostream>
using namespace std;
class A 
{
    
    public:
    int add(int a,int b)
    {
        int c,d,e;
        c=a+b;
        return c;
    }
    int sub(int a,int b)
    {
        int c;
        c=a-b;
        return c;
    }
    int mul(int a,int b)
    {
        int c;
        c=a*b;
        return c;
    }
    float add(float a,float b)
    {
        float c;
        c=a+b;
        return c;
    }
    float sub(float a,float b)
    {
        float c;
        c=a-b;
        return c;
    }
    float mul(float a,float b)
    {
        float c;
        c=a*b;
        return c;
    }
    int add(char a,char b)
    {
        char c;
        c=a+b;
        return c;
    }
    int sub(char a,char b)
    {
        char c;
        c=a-b;
        return c;
    }
    int mul(char a,char b)
    {
        char c;
        c=a*b;
        return c;
    }
};
int main()
{
    A a;
    int x=a.add(10,20);
    int y=a.sub(20,10);
    int z=a.mul(12,2);
    float b=a.add(10.23f,20.34f);
    float c=a.sub(20.23f,10.44f);
    float d=a.mul(12.34f,2.34f);
    char f=a.add('s','a');
    char g=a.sub('f','a');
    char h=a.mul('x','s');
    cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<b<<" "<<c<<" "<<d<<endl;
    cout<<f<<" "<<g<<" "<<h<<endl;

}