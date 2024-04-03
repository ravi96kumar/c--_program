#include<iostream>
#include<vector>
using namespace std;
class A  
{
    public:  
    int x;
    int y;
    A()
    {
        x=10;
        y=20;
    }
    A(const A& obj)
    {
        x=obj.x;
        y=obj.y;
        cout<<"A copy constructor"<<endl;
    }
    A(A&& tobj)
    {
      x=tobj.x;
      y=tobj.y;
      cout<<"move constructor"<<endl;  
    }

};
int main()
{
    A obj;
    vector<A>v;
    v.push_back(obj);
    v.push_back(A());
    v.push_back(A());
    
}