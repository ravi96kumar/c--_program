#include<iostream>
using namespace std;
class shape
{
    protected:
    int height,width;
    public:
    void setvalues(int x,int y)
    {
        width=x;
        height=y;
    }
    virtual int area()
    {
        return 0;
    }
};
class rectangle:public shape
{
    public:
    int area()
    {
        return width*height;
    }
};
class triangle:public shape
{
    public:
    int area()
    {
        return (width*height/2);
    }
};
int main()
{
    rectangle rect;
    triangle tri;
    shape obj;
    shape *ptr = & tri;
    ptr->setvalues(10,15);
    cout<<"area of tri : "<<ptr->area();

    shape*ptr1 = & rect;
    ptr1->setvalues(10,15);
    cout<<"area of rectangle : "<<ptr1->area();

    }