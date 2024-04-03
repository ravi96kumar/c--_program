#include<iostream>
using namespace std;
class vehicle
{
    public:
    int gears;
    int wheels;
    void givingdata(int x,int y);
    void display()
    {
        cout<<"no of gears"<<'x'<<endl;
        cout<<"no of wheeels"<<'y'<<endl;
    }

};
void vehicle::givingdata(int x,int y)
{
    gears= x;
    wheels=y;
}
int main()
{
    vehicle tata;
    {
        tata.givingdata(6,5);
        tata. display();
    }
}