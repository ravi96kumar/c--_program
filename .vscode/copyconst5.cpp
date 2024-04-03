#include<iostream>
#include<malloc.h>
using namespace std;
class A  
{
    public:
   const int a;
    int x;
    char *c;
    A():a(10)
    {
       x=10;
       c=(char*)malloc(sizeof(char));
       *c='a';
    }
     A(const A& obj):a(20)
    {
        x=obj.x;
        c=(char*)malloc(sizeof(char));
        *c=*(obj.c);
    }
   /* void operator=(A& obj)
    {
        x=obj.x;
    
    }*/
    void check()
    {
        *c='m';
    }
    void display()
    {
        
       cout<<x<<"\t"<<*c<<"\t"<<""<<endl;
    }
};
int main()
{
   /* A *a=new A;
    A *b=a;
    A *c=new A;
  //   c=a;*/
  A a;
  A b=a;
  a.display();
  b.display();
  a.check();
  b.display();
  a.display();
  
}