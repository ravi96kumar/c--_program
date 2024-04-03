#include<iostream>
using namespace std;
class car
{
  public:
 int enginemodel;
int horsepower;
char color;
int year;
void savethedetails(int e,int h,char c,int y);
void display();
};
void car::savethedetails(int e, int h, char c, int y)
{
    enginemodel=e;
    horsepower=h;
    color=c;
    year=y;
}
void car::display()
{
    cout<<enginemodel<<"\n"<<horsepower<<"\n"<<color<<"\n"<<year<<endl;

}
int main()
{
    car obj;
    obj.savethedetails(12,46,'a',2020);
    obj.display();
}

