#include<iostream>
using namespace std;
void show();
struct emp
{
    private:
    int id;
    float sal;
    char name;
    public:
    void assign(int,float,char);
    void display();
};
int main()
{
    show();
    return 0;
}
void show()
{
    struct emp e1;
    struct emp e2;
    struct emp e3;
    struct emp e4;
    struct emp e5;
    //e1.assign();
   // e1.display();
    e1.assign(1,21233.76f,'a');
    cout<<"e1 instance"<<endl;
    e1.display();
    e2.assign(2,22233.23,'b');
    cout<<"e2 instance"<<endl;
    e2.display();
    e3.assign(3,33333,'c');
    cout<<"e3 instance"<<endl;
    e3.display();
    e4.assign(4,44433,'d');
    cout<<"e4 instance"<<endl;
    e4.display();
    e5.assign(5,55533,'e');
    cout<<"e5 instance"<<endl;
    e5.display();

}
void emp::assign(int a,float b,char c)
{
    id=a;
    sal=b;
    name=c;
 
}
void emp::display()
{
    cout<<id<<"\t"<<sal<<"\t"<<name<<endl;
}
