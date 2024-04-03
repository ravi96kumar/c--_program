#include<iostream>
using namespace std;
class russia
{
    public:
    int soldiers;
    int wagner;
    void givingdata(int x,int y);
    void disply()
    
    {
        cout<<"no of soldiers"<<'x'<<endl;
        cout<<"no of wagner"<<'y'<<endl;
    }

};
void russia::givingdata(int x,int y)
{
    soldiers=x;
    wagner =y;
}
int main()
{
    russia mani()

    {
        mani.givingdata(int x,int y);
        mani.display();

    }
}