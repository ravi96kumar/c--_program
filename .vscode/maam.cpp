#include<iostream>
using namespace std;
class vehicle
{
    public:
    int wheel;
    int mirrors;
    int peddle;
    void transferdata(int x,int y, int z);
    void display()
    {
        cout<<"no of wheel"<<'x'<<endl;
        cout<<"no of mirrors"<<'y'<<endl;
        cout<<"no of peddle"<<'z'<<endl;
    }
};
void vehicle::transferdata(int x,int y,int z)
{
    wheel=x;
    mirrors=y;
    peddle=z;
}
int main()
{
    vehicle mani;
    {
        mani.transferdata(6,5,2);
        mani.display();
    }
}