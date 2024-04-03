#include<iostream>
using namespace std;
struct emp
{
    private:
    int id;
    float sal;
    char name;
    public:
    void display()
   {
        cout<<id<<" \t"<<sal<<"\t"<<name<<"\n";

    }
    void assign()
    {
        id=1;
        sal=23.33;
        name='a';
    }
};
int  main()
{
    emp e1;
    e1.assign();
    e1.display();
    emp e2;
    e2.assign();
    e2.display();
   // e1.id=1223;
 return 0;
}
/*void emp::display()
{
   cout<<id<<" \t"<<sal<<" \t"<<name<<"\n"; 
}*/