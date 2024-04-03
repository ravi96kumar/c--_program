#include<iostream>
using namespace std;
struct stu
{
    public:
    int id;
    char dept;
    int section;
    void display()
{
cout<<"display"<<id<<"\t"<<dept<<"\t"<<section<<endl;
}
};
 int main()
 {
    struct stu e1;
    e1.id =123;
    e1.dept='a';
    e1.section=1;
    struct stu e2;
    e2.id=111;
    e2.dept='c';
    e2.section=3;
    e1.display();
    e2.display();

 }   




