#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    char name;
    public:
    void display();
    /*{
        cout<<id<<"\t"<<sal<<"\t"<<name<<endl;

    }*/
    void assign(int,float,char);
    /*{
        id=a;
        sal=b;
        name=c;
    }*/
};
int main()
{
    //register int y=10;
    emp e;
    e.assign(1,3452,'a');
    //e.display();
    return 0;
}
void emp::assign(int a,float b,char c)
{
       id=a;
        sal=b;
        name=c;
        display();
}
 void emp::display()
    {
        cout<<id<<"\t"<<sal<<"\t"<<name<<endl;

    }
