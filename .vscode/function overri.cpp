/*#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    void display()
    {
        int z;
        x=12;
        y=14;
        z=x+y;
        cout<<"add="<<z<<endl;

    }
    
    void mul()
    
        {
            int mul;
            mul=x*y;
            cout<<"mul="<<mul<<endl;
            
        }

};
class B:public A
{
    public:
    void display()
    {
    
        cout<<"classB"<<endl;
    }
    void getdata()
    {
        cout<<"get data"<<endl;
    }

};

int main()
{
    A *ptr;
    B objB;
    ptr=&objB;
    ptr->display();
    ptr->mul();
    
    
    
}*/


/*#include<iostream>
using namespace std;
class parent
{
    public:
    void display()
    {
        cout<<"parent"<<endl;
    }
    void showfather()
    {
        cout<<"showfather"<<endl;
    }
};
class child:public parent
{
    void display()
    {
        cout<<"child"<<endl;
    }
    void showannie()
    {
        cout<<"showannie"<<endl;
    }
};
int main()
{
    parent*ptr;
    child objchild;
    ptr=&objchild;
    ptr->display();
    ptr->showfather();
}*/



/*#include<iostream>
using namespace std;
class kolar
{
    public:
    void display()
    {
        cout<<"kolar"<<endl;
    }
    void malur()
    {
        cout<<"malur"<<endl;
    }

};
class benguluru:public kolar
{
    void display()
    {
        cout<<"benguluru"<<endl;
    }
    void baiyapahalli()
    {
        cout<<"baiyapahalli"<<endl;

    }
};
int main()
{
    kolar*ptr;
    benguluru objbenguluru;
    ptr=&objbenguluru;
    ptr->display();
    ptr->malur();
}  */ 


#include<iostream>
using namespace std;
class A
{
    public:
  virtual void display()
    {
    cout<<"class A display"<<endl;
    }
  virtual  void getdata()
    {
        cout<<"initdata"<<endl;
    }
}; 
class B:public A
{
    public:
    void display()
    {
        cout<<"class B display"<<endl;
    }
    void getdata()
    {
        cout<<"getdata"<<endl;
    }
};
int main()
{
    A*ptr;
    B objB;
    ptr=&objB;
    ptr->display();
    ptr->getdata();
    
}
