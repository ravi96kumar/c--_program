#include<iostream>
using namespace std;
class B
{
    public:
    int number;
    void displayname()
    {
    cout<<"number is"<<number<<endl;
    }

B()
{
    cout<<"ctor called"<<endl;
    number=1;
}    
};
int main()
{
    B obj1();
}
