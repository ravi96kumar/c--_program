#include<iostream>
using namespace std;
class rusk
{
    public:
    int quality;
    int shop;
    int quantity;
    int transferdata(int x,int y,int z);
    void display()
    {
        cout<<"how much quality"<<quality<<endl;
        cout<<"where is the shop"<<shop<<endl;
        cout<<"wat is the quantity"<<quantity<<endl;
    }
};
int rusk::transferdata(int x,int y,int z)
{
    quality=x;
    shop=y;
    quantity=z;

}
int main()
{
    rusk brand;
    
        brand. transferdata (2,3,5);
        brand. display();

}