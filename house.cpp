#include<iostream>
using namespace std;
class house
{
public:
int windows;
int doors;
int walls;
int pillars;
void savehousedetails(int w,int d,int wl,int p);
void display();
};
void house :: savehousedetails(int w,int d,int wl,int p)
{
    windows=w;
    doors=d;
    walls=wl;
    pillars=p;
}   
void house::display()
{
    cout<<"no.of windows"<<windows<<endl;
    cout<<"no.of doors"<<doors<<endl;
    cout<<"no. of walls"<<walls<<endl;
    cout<<"no.of pillars"<<pillars<<endl;

}
int main()
{
     house obj; 
     obj.savehousedetails(12,12,34,54);  
    obj.display();
}








