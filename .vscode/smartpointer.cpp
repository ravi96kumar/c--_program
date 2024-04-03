#include<iostream>
#include<memory>
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
    void display()
    {
        cout<<x<<"\t"<<y<<endl;
    }
};
int main()
{
  
  // unique_ptr<A> p1(new A);
  shared_ptr<A> p1(new A);
  p1->display();
  

}