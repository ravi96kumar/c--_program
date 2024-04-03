#include<iostream>
using namespace std;
class parent
{
    public:
    int a;
    parent()
    {
        a=10;
    }
};
class child:public parent
{
    public:
    void display()
    {
        cout<<"class parent varible\n"<<a<<endl;
    }
};
int main()
{
    child object;
    object. display();
}

    
    

