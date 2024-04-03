#include<iostream>
using namespace std;
class dog
{
    public:
    int dogid;
   char  dogsec;
    float dogprice;
    void givedata(int a,char b,float c);
    void display()
    {
        cout<<"dogid\n"<<dogid<<endl;
        cout<<"dogsec\n"<<dogsec<<endl;
        cout<<"dogprice\n"<<dogprice<<endl;
    }
};
void dog::givedata(int a,char b,float c)
{
    dogid=a;
    dogsec=b;
    dogprice=c;
}
int main()
{
    dog husky;
    husky.givedata(21,'g',32.2);
    husky.display();
}