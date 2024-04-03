#include<iostream>
using namespace std;
class A 
{
    public:
    int a;
    int b;
    void display(A);
    A show(int,int);
    
};
A assign(A);
A check(A);
int main()
{
    A a1;
    a1.a=123;
    a1.b=233;
   a1.display(a1);
   A a;
   a=a1.show(a1.a,a1.b);
   cout<<a.a<<"\t"<<a.b<<endl;
   A q;
   q=assign(a);
   cout<<q.a<<"\t"<<q.b<<endl;
   A r;
   r=check(q);
    cout<<r.a<<"\t"<<r.b<<endl;
   return 0;
}
void A::display(A x)
{
    cout<<a<<"\t"<<b<<endl;
}
A A::show(int x,int y)
{
   A s;
    s.a=x+1;
    s.b=y+1;
    return s;
}
A assign(A x)
{
    A p;
    p.a=x.a+1;
    p.b=x.b+2;
    return p;
}
A check(A r)
{
    A s;
    s.a=r.a+2;
    s.b=r.b+2;
    return s;
}