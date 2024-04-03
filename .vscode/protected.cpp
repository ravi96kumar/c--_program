#include<iostream>
using namespace std;
class A 
{
    int x;
    int y;
    protected:  
    int a;
    int b;
    public:  
    int p;
    int q;
    void assign(int,int,int,int,int,int);
    void Adisplay();
};
class B:public A
{
    int m;
    int n;
    protected:
    int s;
    int r;
    public:  
    void Bassign(int,int,int,int,int,int,int,int);
    void Bdisplay();

};
void A::assign(int e,int f,int g,int h,int i,int j)
{
    x=e;
    y=f;
    a=g;
    b=h;
    p=i;
    q=j;
}
void A::Adisplay()
{
    cout<<x<<" "<<y<<" "<<a<<" "<<b<<" "<<p<<" "<<q<<endl;
}
void B::Bassign(int e,int f,int g,int h,int i,int j,int k,int l)
{
    assign(1,2,3,4,5,6);
     Adisplay();
    m=e;
    n=f;
    p=g;
    q=h;
    a=i;
    b=j;
    s=k;
    r=l;
    
}
void B::Bdisplay()
{
    cout<<n<<" "<<m<<" "<<s<<" "<<r<<" "<<p<<" "<<q<<" "<<a<<" "<<b<<endl;
}
int main()
{
    B b;
    B c;
    b.Bassign(1,2,3,4,5,6,7,8);
    b.Bdisplay();
}