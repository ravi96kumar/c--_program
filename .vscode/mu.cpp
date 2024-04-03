#include<iostream>
using namespace std;
class clothes
{
    public:
    int nool;
    int meters;
    void selldata(int a,int b);
    void display()
    {
        cout<<"which nool "<<"25"<<endl;
        cout<<"how much meter "<<"25"<<endl;
    }

};
void clothes::selldata(int a,int b)
{
    nool=a;
    meters=b;
}
int main()

{
 clothes raymond; 
 {
    raymond.selldata(12,25);
    raymond.display();
 }  
}

