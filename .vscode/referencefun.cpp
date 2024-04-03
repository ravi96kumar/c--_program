#include<iostream>
using namespace std;
int &changevalue(int &a,int &b)
{
   // int c=10;
    a=100;
    b=200;
    return a;
}
int main()
{
    int x,y;
    x=10;
    y=20;
  int const &z= changevalue(x,y);
  
    cout<<x<<"\t"<<y<<"\t"<<z<<endl;
     cout<<&x<<"\t"<<&y<<"\t"<<&z<<endl;
     cout<<sizeof(&z)<<endl;
}