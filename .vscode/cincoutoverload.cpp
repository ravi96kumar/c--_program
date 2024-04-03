#include<iostream>
using namespace std;
//class A;
//ostream& operator<<(ostream&,const A&);
class A  
{ 
    public:
    int x;
    int y;
    int p;
    int q;
    public:  
    A() 
    {
        x=10;
        y=20;
        p=30;
        q=40;
    }
    void display()const
    {
      cout<<x<<"\t"<<y<<"\t"<<p<<"\t"<<q<<endl;  
    }
    friend ostream& operator<<(ostream&,const A&);
    friend istream& operator>>(istream&,A&);
};
ostream& operator<<(ostream& out,const A& obj)
{
    out<<obj.x<<"\t"<<obj.y<<"\t"<<obj.p<<"\t"<<obj.q<<endl;
    return out;
}
istream& operator>>(istream& in,A& tobj) 
{
    in>>tobj.x;
    in>>tobj.y;
    in>>tobj.p;
    in>>tobj.q;
    return in;
}
int main()
{
    A a;
    a.display();
    cin>>a;
    cout<<a;

}