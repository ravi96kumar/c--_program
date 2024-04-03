#include<iostream>
using namespace std;
class singleton
{
    
    singleton()
    {
        cout<<"constructor created"<<endl;
    }
   // static singleton* ptr;
    static singleton* ptr2;

    public:  
    static singleton* getinstance()
    {
        if(ptr2==NULL)
        {
            ptr2=new singleton;
        }
        return ptr2;
    }
    void display()
    {
        cout<<"singleton display"<<endl;
    }
      ~singleton()
    {
        delete(ptr2);
        cout<<"memory deleted"<<endl;
    }
 
};
 singleton* singleton::ptr2=NULL;
 int main()
{
    
    singleton* pobj=singleton::getinstance();
    pobj->display();
   // pobj->show();
  // singleton*pobj2= pobj->getinstance();
  // pobj2->display();
   //cout<<pobj<<"\t"<<pobj2<<endl;
   //pobj->deallocate();

  
}