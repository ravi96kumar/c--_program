#include<iostream>
using namespace std;
class B 
{
    int id;
    char name;
    static int a;
    static int b;
    public:
   static void show();
    friend int main();
  
};
int B::a=10;
int B::b=20;
class A:public B
{
    int x;
    int y;
    public:
    void assign(int,int);
    void display();
 
    friend void B::show();
    friend int main();

};
void A::assign(int a,int b)
{
    x=a;
    y=b;
}
void A::display()
{
    cout<<x<<"\t"<<y<<endl;
}

void B::show()
{
   /* A b;
    b.x=123;
    b.y=234;
    b.display();
    id=12;
    name='d';
    cout<<id<<"\t"<<name<<endl;*/

}
    
int main()
{
   /* A a1;
    a1.x=10;
    B b1;
    b1.id=1;
    a1.assign(12,13);
    a1.display();
    B b2;
    b2.show();*/
    cout<<B::a<<"\t"<<B::b<<endl;

  

}
