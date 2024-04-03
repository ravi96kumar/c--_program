#include<iostream>
using namespace std;
class parent
{
    public:
    parent()
    {
        cout<<"parent ctor"<<endl;
    }
};
class daughter:public parent
{
    public:
    daughter()
    {
        cout<<"daughter ctor"<<endl;
    }
};
class son:public parent
{
    public:
    son()
    {
        cout<<"son ctor"<<endl;
    }
};
class uncle:public son
{
    public:
    uncle()
    {
        cout<<"uncle ctor"<<endl;
    }

};
int main()
{
    daughter object;
    son object2;
    uncle object3; 
}