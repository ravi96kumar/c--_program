#include<iostream>
using namespace std;
class A 
{
    public: 
    int x;
    int y; 
   A():x(20),y(30)
   {

   }
   void operator--(int x)
   {
      --x;
    y--;
   } 
  void operator++()
   {
    x++;
    y++;
   }
   void operator+()
   {

    x=-x;
   }
 
   void display()
   {
    cout<<x<<"\t"<<y<<endl;
   }
  void friend operator+(A &,A);
  void friend operator++(A &,int);
};
int main()
{
    A a;
    a--;
    A b;
    ++b;
    A c;
    c.operator+();
    /*a.display();
    b.display();
    c.display();*/
   b+c;
 // b.display();
  A f;
  f.display();
  f++;
  f.display();
 

}
void operator+(A &b,A c)
{
  A d;
  b.x=b.x+c.x;
  b.y=b.y+c.y;
  //return d;

}
void operator++(A &f,int c)
{
    f.x=f.x++;
    f.y=f.y++;
}
