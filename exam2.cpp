#include<iostream>
using namespace std;
struct emp
{
    int id;
     float sal;
    //int id;
    char name;
    emp(int a,int b):sal(20),id(1),name('a')
    {
       cout<<a<<"\t"<<b<<endl;
    }
    void display()const
   {
    //id=12;
    cout<<id<<"\t"<<sal<<"\t"<<name<<endl;
   }
   ~emp()
   {
    cout<<"destructor"<<endl;
   }
};
//int emp::id=12;

struct emp fun(struct emp);
int main()
{
   struct emp e1(2,3);//={1,234,'e'};
    struct emp e2(3,5);
 // e2=fun(e1);
 cout<<e2.id<<"\t"<<e2.sal<<"\t"<<e2.name<<endl;
 e1.display();
 cout<<sizeof(e1)<<endl;;
}
/*struct emp fun(struct emp e1)
{
    struct emp e3;
    e3.id=e1.id;
    e3.sal=e1.sal;
    e3.name=e1.name;
    emp::id=12;
    return e3;
}*/