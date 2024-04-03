#include<iostream>
using namespace std;
class A  
{
    int x;
    int *ptr;
    public:  
    A() 
    {
        x=10;
        ptr=&x;
    }

    A(const A &a)
    {
      cout<<"copy const"<<endl;
      ptr=new int;
      x=a.x;
      *ptr=*(a).ptr;
    }
    void display()
    {
        cout<<x<<"\t"<<*ptr<<"\t"<<ptr<<endl;
    }
~A()
{
  
}
};
int main()
{
 /* A *a=new A;
  a->display();
  A *b=a;
  delete(a);
  b->display();

  cout<<a<<"\t"<<b<<endl;*/
  A obj;
  obj.display();
  A obj2=obj;
  obj2.display();

}