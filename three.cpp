#include<iostream>
using namespace std;
class emp
{
    public:
    int id;
    float sal;
    char name;
    void assign(int a,float b,char c)
    {
        id=a;
        sal=b;
        name=c;
    }
    void display()
    {
        cout<<id<<"\t"<<sal<<"\t"<<name<<endl;
    }
};
void display();
int main()
{

    class emp e1;
    e1.assign(1,1235,'s');
    e1.display();
    display();
    return 0;
}
void display()
{
    class emp e2;
    e2.id=2;
    e2.sal=33234;
    e2.name='d';
     cout<<e2.id<<"\t"<<e2.sal<<"\t"<<e2.name<<endl;
}
