#include<iostream>
using namespace std;
class A 
{
    int x;
    int y;
    public:  
    void add(int a,int b)
    {
        x=a;
        y=b;
        cout<<a<<" "<<b<<endl;
    }
    int add(int a,int b,int c)
    {
      int m=a+b;
        cout<<a<<" "<<b<<endl;
        return m;
    }
    float add(int a,int b,int c,int d)
    {
        float m=a+b;
        return m;
    }


};
int main()
{
    A z;
    z.add(12,12);
   // int y=z.add(12,12);
}