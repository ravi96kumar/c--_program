#include<iostream>
using namespace std;
typedef int ravi;
class A  
{
    ravi x;
    ravi y;
    public:
    A(int i)
    {
        x=i;
        y=i;
      cout<<"constructor called"<<endl;  
    }
    A(A &a)
    {

    }
    void operator==(A a)
    {
        if(a.x==x)
        {
        cout<<x<<"are equal"<<a.x<<endl;
        }
        else{
            cout<<"not equal"<<endl;
        }
    }
    void assign(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }
    A()
    {

    }
};
class B  
{
    public:  
    int x;
    int y;
    int z;
    ~B()
    {
        cout<<"destructor"<<endl;
    }
    
};
int main()
{
   A a(20);
    a=30;
    a.display();
    a.assign(12,13);
    A b=a;
    b.assign(13,12);
    a==b;
    cout<<"class b"<<endl;
    B m={150,300,450};
    cout<<m.x<<"\t"<<m.y<<"\t"<<m.z<<endl;
}