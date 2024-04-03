#include<iostream>
using namespace std;
struct stu
{
    int id;
    char sec;
    float sal;
    void display()
    

{
    cout<<"display"<<id<<"\t"<<sec<<"\t"<<sal<<endl;
}
};
int main()
{
    struct stu e1;
    e1.id=123;
    e1.sec='q'; 
    e1.sal=3000.00;
    struct stu e2;
    e2.id =111;
    e2.sec='w';
    e2.sal=2000.00;
    e1.display();
    e2.display();
    cout<<sizeof(e1)<<endl;
}




