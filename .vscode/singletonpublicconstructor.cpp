#include<iostream>
#include<stdio.h>
using namespace std;
class single 
{
    private:
     static single *objectptr;
     public: 
     single()
     {

     }
     static single * createobject()
     {
        if(objectptr==NULL)
        {
            cout<<"first instance created"<<endl;
            objectptr=new single;
        }
        return objectptr;
     }
     void print()
     {
        cout<<"i am in single class"<<endl;
        cout<<this<<endl;
     }
};
single * single::objectptr=NULL;
int main()
{
    single * s1=single::createobject();
    s1->print();
    single s2;
    s2.print();
    single s3;
    s3.print();

}